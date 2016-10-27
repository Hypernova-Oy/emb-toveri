#!/usr/bin/bash

echo "Helpful ansible commands stored here for further reusing"

echo "Provision a new Raspberry Pi with Debian Jessie lite without manually establishing and accepting the SSH-connection."
echo "So a completely headless provisioning of a new Raspberry."
echo host_key_checking=False ansible-playbook -i production toverit.playbook


