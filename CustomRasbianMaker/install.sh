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

function customizeImage {
    if [ -f $SSH_AUTHORIZED_KEY ]
    then
       cp $SSH_AUTHORIZED_KEY rootfs/home/pi/authorized_keys
       SSH_KEY_COPIED=1
    fi

    chroot rootfs ./chroot-script.sh
}

function cleanFiles {
    rm rootfs -R
}

function parseArgs {
    while getopts "s:" option; do
	case $option in
	    s)
		SSH_AUTHORIZED_KEY=="$OPTARG"
		if [ ! -f $SSH_AUTHORIZED_KEY ]
		then
		    echo "File given to argument -s doesn't exist!"
		    exit 1
		fi
		;;
	    ?)
	        echo "Usage: program [-s [ssh_pub_key_path]]"
		exit 1
	    ;;
	    
	esac
    done
}

function prepareChroot {
    getRasbianIMG
    mountRootFS
    bindHostDevicesToChroot
    adjustRootFSForHost
}

function printInstallationInfo {
    if [ $SSH_KEY_COPIED -eq "1" ]
    then
	echo "You can login with the user pi using your ssh key"
    fi
}
			
function main {
    parseArgs
    installQemu
    prepareChroot
    customizeImage
    unmountRootFS
    cleanFiles
    printInstallationInfo
}

main
