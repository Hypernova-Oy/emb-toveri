EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:ds18b20+
LIBS:ec2-3tnu
LIBS:at-1220-twt-5v-r
LIBS:nhd-0420cw-ab3
LIBS:ec2-nu
LIBS:headers
LIBS:Koha-Suomi
LIBS:authenticator-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 2
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L NHD-0420CW-AB3 NHD1
U 1 1 598B2F34
P 3800 3250
F 0 "NHD1" H 5000 2400 60  0000 C CNN
F 1 "NHD-0420CW-AB3" H 3600 2400 60  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x20_Pitch2.54mm" H 3800 3250 60  0001 C CNN
F 3 "" H 3800 3250 60  0001 C CNN
	1    3800 3250
	0    1    1    0   
$EndComp
Text Notes 2900 2400 0    60   ~ 0
OLED display over SPI
$Comp
L HEADER_S_1X07 H4
U 1 1 598B3472
P 4950 3200
F 0 "H4" H 4950 3750 50  0000 C CNN
F 1 "HEADER_S_1X07" V 5050 3350 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x07_Pitch2.54mm" H 4950 3200 50  0001 C CNN
F 3 "" H 4950 3200 50  0000 C CNN
	1    4950 3200
	1    0    0    1   
$EndComp
Text Notes 5100 3700 0    68   ~ 0
To PCB\n3V3\nGND\nD0\nD1\nD2\nCS\nRES
Wire Notes Line
	2850 4800 5250 4800
Wire Notes Line
	2850 2400 4350 2400
Wire Notes Line
	5250 2300 2850 2300
Wire Notes Line
	5250 4800 5250 2300
Wire Notes Line
	2850 2300 2850 4800
Wire Notes Line
	5250 2400 4250 2400
Wire Wire Line
	3700 3150 4750 3150
Wire Wire Line
	4300 2650 4300 4550
Wire Wire Line
	4300 4550 3700 4550
Wire Wire Line
	4300 2650 3700 2650
Connection ~ 4300 3150
Wire Wire Line
	3700 2750 4400 2750
Wire Wire Line
	4400 2750 4400 3050
Wire Wire Line
	4400 3050 4750 3050
Wire Wire Line
	3700 2850 4300 2850
Connection ~ 4300 2850
Wire Wire Line
	3700 2950 4300 2950
Connection ~ 4300 2950
Wire Wire Line
	3700 3050 4300 3050
Connection ~ 4300 3050
Wire Wire Line
	3700 3250 4750 3250
Wire Wire Line
	3700 3350 4750 3350
Wire Wire Line
	3700 3450 4750 3450
Wire Wire Line
	3700 3550 4300 3550
Connection ~ 4300 3550
Wire Wire Line
	3700 3650 4300 3650
Connection ~ 4300 3650
Wire Wire Line
	3700 4050 4550 4050
Wire Wire Line
	4550 4050 4550 3550
Wire Wire Line
	4550 3550 4750 3550
Wire Wire Line
	3700 4150 4650 4150
Wire Wire Line
	4650 4150 4650 3650
Wire Wire Line
	4650 3650 4750 3650
Wire Wire Line
	3700 4250 4300 4250
Connection ~ 4300 4250
Wire Wire Line
	3700 4350 4300 4350
Connection ~ 4300 4350
Wire Wire Line
	3700 4450 4300 4450
Connection ~ 4300 4450
Wire Wire Line
	3700 3750 4300 3750
Connection ~ 4300 3750
Wire Wire Line
	3700 3850 4300 3850
Connection ~ 4300 3850
Wire Wire Line
	3700 3950 4300 3950
Connection ~ 4300 3950
Connection ~ 4300 4550
Connection ~ 4300 2650
Text Label 4450 3050 0    68   ~ 0
3V3
Text Label 4450 3150 0    68   ~ 0
GND
Text Label 4450 3250 0    68   ~ 0
D0
Text Label 4450 3350 0    68   ~ 0
D1
Text Label 4450 3450 0    68   ~ 0
D2
Text Label 4550 3550 0    68   ~ 0
CS
Text Label 4750 3650 2    68   ~ 0
RES
$EndSCHEMATC
