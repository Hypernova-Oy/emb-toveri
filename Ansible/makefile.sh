#!/bin/bash
#
# IN THIS FILE:
#
# Builds a complete and configured Ansible master controller for Toveris
#

debianPackages="python-pip python-pip"  #A list of packages
ansibleRolesFromGalaxy="geerlingguy.ntp geerlingguy.ntp"  #A list of roles

ansibleSystemConfigPath="/etc/ansible"
ansibleVaultPasswordFile="$ansibleSystemConfigPath/passwd"
ansibleConfigFile="$ansibleSystemConfigPath/ansible.cfg"

function createDefaultConfig {
  file=$1

  echo "[defaults]" >> $file
  echo "vault_password_file = $ansibleVaultPasswordFile" >> $file
}

echo ""
echo "INSTALLING ANSIBLE"
echo "------------------"
apt-get install -y $debianPackages
pip install ansible

echo ""
echo "INSTALLING ANSIBLE ROLES FROM GALAXY"
echo "------------------------------------"
ansible-galaxy install $ansibleRolesFromGalaxy

echo ""
echo "INSTALLING VAULT PASSWORD FILE STUB"
echo "-----------------------------------"
mkdir -p $ansibleSystemConfigPath
touch $ansibleVaultPasswordFile
echo "Write your vault password to '$ansibleVaultPasswordFile'"

echo ""
echo "INSTALL CONFIG"
echo "--------------"
if [ ! -e $ansibleConfigFile ]
then
  echo "Ansible config '$ansibleConfigFile' missing. Creating it for you!"
  createDefaultConfig $ansibleConfigFile
else
  echo "Ansible config '$ansibleConfigFile' exists. So not ramming it up."
  echo "If you want me to recreate it for you, you must nuke it first with"
  echo "    sudo rm $ansibleConfigFile"
fi
