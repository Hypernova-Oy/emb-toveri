#!/bin/bash

# Copyright (C) 2016 Koha-Suomi
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

function installQemu {
    apt update
    apt install qemu qemu-user-static binfmt-support
}

function getRasbianIMG {
    if [ ! -f raspbian_lite_latest.zip ]
    then
	   wget https://downloads.raspberrypi.org/raspbian_lite_latest
	   mv raspbian_lite_latest raspbian_lite_latest.zip
    fi
    unzip raspbian_lite_latest.zip
}

function addKernelGPIODeviceTree {
    mountBootFS
    echo "dtoverlay=w1-gpio" >> boot/config.txt
    unmountBootFS
}

function unmountBootFS {
    umount boot
    rm boot -r
}

function mountBootFS {
    mkdir boot

    START=$( fdisk -l *.img -o Start | tail -2 | head -1 )

    SECTOR_SIZE=$( fdisk -l *.img -o Sectors \
			 | grep Units | sed "s/.*= //" | sed "s/ .*//" )

    OFFSET=$(( $START * $SECTOR_SIZE ))
    sudo mount -v -o offset=$OFFSET -t vfat *.img boot
}

function mountRootFS {
    mkdir rootfs

    START=$( fdisk -l *.img -o Start | tail -1 )

    SECTOR_SIZE=$( fdisk -l *.img -o Sectors \
			 | grep Units | sed "s/.*= //" | sed "s/ .*//" )

    OFFSET=$(( $START * $SECTOR_SIZE ))
    sudo mount -v -o offset=$OFFSET -t ext4 *.img rootfs
}

function bindHostDevicesToChroot {
    mount --bind /dev rootfs/dev/
    mount --bind /sys rootfs/sys/
    mount --bind /proc rootfs/proc/
}

function adjustRootFSForHost {
    # Comment ld.so.preload, otherwise no internet on chrooted system
    sed "1s/^/#/" rootfs/etc/ld.so.preload -i
    cp /usr/bin/qemu-arm-static rootfs/usr/bin/
    cp chroot-script.sh rootfs/chroot-script.sh
}

function unmountRootFS {
    # Umount devices on root FS
    if ! umount rootfs/dev; then exit 1; fi
    if ! umount rootfs/sys; then exit 1; fi
    if ! umount rootfs/proc; then exit 1; fi
    if ! umount rootfs; then exit 1; fi
}

function restoreChrootsOriginalState {
    # Uncomment ld.so.preload so it is as before
    sed "s/#//" rootfs/etc/ld.so.preload -i
    rm rootfs/usr/bin/qemu-arm-static
    rm rootfs/chroot-script.sh
}

function addModulesForTempSensor {
    echo "w1-gpio" >> rootfs/etc/modules
    echo "w1-therm" >> rootfs/etc/modules
}

function customizeImage {
    addKernelGPIODeviceTree
    addModulesForTempSensor
    cpSSHPubKey

    chroot rootfs ./chroot-script.sh
}

function cpSSHPubKey {
    if [ "$SSH_AUTHORIZED_KEY" != "" ]
    then
	echo "key is $SSH_AUTHORIZED_KEY"
	cp $SSH_AUTHORIZED_KEY rootfs/home/pi/authorized_keys
	SSH_KEY_COPIED=1
    fi
}

function cleanFiles {
    rm rootfs -R
}

function prepareChroot {
    getRasbianIMG
    mountRootFS
    bindHostDevicesToChroot
    adjustRootFSForHost
}

function printInstallationInfo {
    echo "Writable image for sd card has been created and placed on the current directory"

    if [ $SSH_KEY_COPIED == "1" ]
    then
	echo "You can login with the user pi using your ssh key"
    fi
}
			
function main {
    installQemu
    prepareChroot
    customizeImage
    unmountRootFS
    cleanFiles
    printInstallationInfo
}

while getopts "s:" option; do
    case $option in
	s)
	    SSH_AUTHORIZED_KEY="$OPTARG"
	    echo "key is : $SSH_AUTHORIZED_KEY"
	    if [ ! -f $SSH_AUTHORIZED_KEY ]
	    then
		echo "File given to argument -s doesn't exist!"
		exit 2
	    fi
	    ;;
	?)
	echo "Usage: install.sh [-s [ssh_pub_key_path]]"
	exit 2
	;;
    esac
done

main
