# Toveri software installation and management.

## 0. Prepare the central controller

Toveri-network is managed from one central controller. It automates software provisioning for the Raspberry PIs and management of configuration.

0. Choose a location for your central controller. For testing and assembly purposes it can be a local PC, or a virtual server in the cloud, or anything in between.

1. Install Ubuntu

2. Get the source code

`$> git clone https://github.com/Hypernova-Oy/emb-toveri.git`
`$> cd emb-toveri/Ansible`

3. Install the central controller

`$> sudo bash makefile.sh`

## 1. Provisioning a Raspberry PI

### Prepare the operating system

1. Install Raspbian lite.

2. Run the ansible_slave_driver.sh.gpg in the Raspberry Pi. (see the next step)

### Provision the software from the central controller

#### 1. Add a new Toveri to the central controller

`ansible-playbook -vvvv toverit_provision_new.playbook`

or if you want to provide the configuration from the CLI

`ansible-playbook -vvvv toverit_provision_new.playbook -e max_toveri_port=53518 -e toveri_organization_name=vaara -e toveri_name=liperi`

#### 2. Edit the new configuration and the new vault

#### 3. Run the bootstrap-script in the Raspbian

Copy the encrypted ~/secret/ansible_slave_driver.sh.gpg to the destination Raspbian OS, and run it there, to make the Raspian connect to the central controller.

#### 4. Provision with Ansible

`ansible-playbook toverit.playbook`

## 2. Managing the infrastructure

1. Edit Ansible configuration files

2. Provision with Ansible

`ansible-playbook toverit.playbook`

