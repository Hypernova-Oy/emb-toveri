#!/bin/bash
#
# IN THIS FILE
#
# Place this on the GUI desktop, so the maintenance engineer can easily check if the reverse shell is working.
#
sudo systemctl status --no-pager toveri-cc-ssh-tunnel.service
sleep 5
sudo journalctl -f -u toveri-cc-ssh-tunnel.service
sleep 5
