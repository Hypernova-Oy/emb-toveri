#!/bin/bash
#
# IN THIS FILE
#
# Place this on the GUI desktop, so the maintenance engineer can easily restart the reverse shell.
#
sudo systemctl restart --no-pager toveri-cc-ssh-tunnel.service
sleep 5
