#!/bin/bash
#
# IN THIS FILE
#
# Place this on the GUI desktop, so the maintenance engineer can easily restart the DHCP server
#
sudo systemctl restart --no-pager isc-dhcp-server.service
sleep 5
