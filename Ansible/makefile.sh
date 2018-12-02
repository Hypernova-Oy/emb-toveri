#!/bin/bash
#
# IN THIS FILE:
#
# Builds a complete and configured Ansible master controller for Toveris
#

debianPackages="python3-pip python3-pip"  #A list of packages
ansibleRolesFromGalaxy="geerlingguy.ntp geerlingguy.ntp"  #A list of roles

ansibleSystemConfigPath="/etc/ansible"
ansibleVaultPasswordFile="$ansibleSystemConfigPath/passwd"
ansibleConfigFile="$ansibleSystemConfigPath/ansible.cfg"
ansibleExampleConfigurationsDir="examples/default_config"
ansiblePlaybookConfigDir="/home/ansible/ToveriConfig"

echo ""
echo "INSTALLING ANSIBLE"
echo "------------------"
apt install -y $debianPackages
pip3 install ansible

echo ""
echo "INSTALLING ANSIBLE ROLES FROM GALAXY"
echo "------------------------------------"
ansible-galaxy install $ansibleRolesFromGalaxy

echo ""
echo "CREATING ansible-USER"
echo "---------------------"
sudo useradd -d /home/ansible -m -s /bin/bash ansible
sudo addgroup ansible sudo
echo "Enter the ansible_sudo_pass: "
read -s ansible_sudo_pass
echo "Thank you!"
sudo su -c "echo 'ansible:$ansible_sudo_pass' | chpasswd" root
sudo su -c "echo 'y' | /usr/bin/ssh-keygen -f /home/ansible/.ssh/id_rsa -t rsa -N ''" ansible
ansible_public_key=$(cat /home/ansible/.ssh/id_rsa.pub)

echo ""
echo "INSTALLING VAULT PASSWORD FILE STUB"
echo "-----------------------------------"
mkdir -p $ansibleSystemConfigPath
touch $ansibleVaultPasswordFile
chown ansible:root $ansibleVaultPasswordFile
chmod 600 $ansibleVaultPasswordFile

echo ""
echo "COPYING EXAMPLE CONFIGURATIONS"
echo "------------------------------"
cp -r $ansibleExampleConfigurationsDir $ansiblePlaybookConfigDir
echo "ansible_sudo_pass:  \"$ansible_sudo_pass\""        >> $ansiblePlaybookConfigDir/group_vars/all
echo "ansible_config_dir: \"$ansiblePlaybookConfigDir\"" >> $ansiblePlaybookConfigDir/group_vars/all
echo "ansible_public_key: \"$ansible_public_key\""       >> $ansiblePlaybookConfigDir/group_vars/all

echo ""
echo "POST INSTALLATION TASKS"
echo "-----------------------"
echo ""
echo "- ansible-vault your ansible sudo password for security."
echo "  It has been appended to $ansiblePlaybookConfigDir/group_vars/all"
echo ""
echo "- Write your vault password to '$ansibleVaultPasswordFile'"
echo ""

