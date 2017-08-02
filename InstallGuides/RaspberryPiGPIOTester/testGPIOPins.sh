#!/bin/bash

## IN THIS FILE ##
#
# Triggers wiringPi and HiPi tests to test that all GPIO pins work correctly and are accessible by
# the current user
#
## USAGE ##
#
# Connect all GPIO pins (and other controllable pins, such as ID_SD, ID_SC) to the GPIO test board
# in physical pin order.
#
# Observe the leds turn on and off in order.
#
# If a led fails to turn on, there is a potential issue with the GPIO-pins or the test board.
# Try the same led with a different gpio-pin, if it works, there is a problem with wiringPi or your
# board's hardware

## FILES ##
#
# 0-pins-to-test.cfg
#
#  configure the physical Raspberry Pi 3+ pins to test. It is also a handy guide to know which pins
#  need to be wired to the test board
#

echo ""
echo "###############################################"
echo "##  Executing wiringPi tests                 ##"
echo "##  Observe the leds blink in correct order  ##"
echo "###############################################"
echo ""
./1-gpio-test.sh

echo ""
echo "###############################################"
echo "##  Executing HiPi tests                     ##"
echo "##  Observe the leds blink in correct order  ##"
echo "###############################################"
echo ""
./2-gpio-test.pl
echo ""
echo "###############################################"
echo "## Done testing                              ##"
echo "###############################################"
echo ""
