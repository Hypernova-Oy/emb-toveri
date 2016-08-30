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

function downloadSSLibraryPackages {
    user="KohaSuomi"
    getLatestDebianPackage $user SSAuthenticator
    getLatestDebianPackage $user emb-buzzer
    getLatestDebianPackage $user emb-gpio
    getLatestDebianPackage $user HiPi
}

function getLatestDebianPackage {
    user=$1
    repository=$2
    wget $( wget -q -O - https://api.github.com/repos/$user/$repository/releases/latest \
		  | grep browser_download_url | sed "s/.*: //" | tr -d \" )
}

function installSSLibraryPackages {
    mkdir packages && cd packages

    downloadSSLibraryPackages

    apt update
    yes | dpkg -i *.deb
    yes | apt install -f -y

    cd ..

    rm packages -r
}

function installAdministrationPackages {
    yes | apt install openssh-server
    service ssh stop # We cannot unmount rootfs if daemon is running
}

function configurePackages {
    nano /etc/authenticator/daemon.conf
    nano /etc/ssh/sshd_config

    read -p "Do you want to open bash for editing filesystem (y/N)?" option
    case "$option" in
	y|Y)
	    bash
	    ;;
    esac
}

installSSLibraryPackages
installAdministrationPackages
configurePackages
