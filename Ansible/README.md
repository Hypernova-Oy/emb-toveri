# Toveri software installation and management.

## 0. Prepare the central controller

Toveri-network is managed from one central controller. It automates software provisioning for the Raspberry PIs and management of configuration.

0. Choose a location for your central controller. For testing and assembly purposes it can be a local PC, or a virtual server in the cloud, or anything in between.
1. Install Ubuntu 18.04
2. Get the source code
`$> git clone https://github.com/Hypernova-Oy/emb-toveri.git`
`$> cd emb-toveri/Ansible`
3. Install the central controller
`$> sudo bash makefile.sh`

## 1. Provisioning a Raspberry PI

### Prepare the operating system

1. Install Raspbian lite.
The latest tested version is **Raspbian Stretch Lite November 2018**
Flash it to the Raspberry-certified sd-card
`$> dd bs=4M if=Downloads/2018-11-13-raspbian-stretch-lite.img of=/dev/sdX conv=fsync`
3. Install openssh-server
4. Configure network access, from the central controller, to the openssh-server

### Provision the software from the central controller

1. Add a new Toveri-entry to the Ansible inventory file
2. Copy the example host_vars to use as a template
`$> cp -r host_vars/toveri_example host_vars/viinijarvi`
3. Edit the new configuration
4. Provision with Ansible
`ansible-playbook toverit.playbook`

## 2. Managing the infrastructure

1. Edit Ansible configuration files
2. Provision with Ansible
`ansible-playbook toverit.playbook`

