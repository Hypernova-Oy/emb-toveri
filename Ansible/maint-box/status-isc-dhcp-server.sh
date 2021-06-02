#!/bin/bash
#
# IN THIS FILE
#
# Place this on the GUI desktop, so the maintenance engineer can easily check if the DHCP server is working.
#
sudo systemctl status --no-pager isc-dhcp-server.service
sleep 5
sudo journalctl -f -u isc-dhcp-server.service
sleep 5
