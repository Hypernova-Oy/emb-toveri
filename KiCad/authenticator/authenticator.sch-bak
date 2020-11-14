EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 1
Title "Authenticator"
Date ""
Rev "0.1"
Comp "Vaara-kirjastot"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L authenticator-rescue:CP C1
U 1 1 57BC47D3
P 5900 6650
F 0 "C1" H 5925 6750 50  0000 L CNN
F 1 "100 uF" H 5800 6450 50  0000 L CNN
F 2 "Koha-Suomi:UMW0G101MDD" H 5938 6500 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/293/e-umw-1219455.pdf" H 5900 6650 50  0001 C CNN
F 4 "UMW0G101MDD" H 5900 6650 50  0001 C CNN "Model"
F 5 "Aluminium Electrolytic Capacitors - Radial Leaded 4volts 100uF 85c 5x5 2LS" H 5900 6650 50  0001 C CNN "Title"
F 6 "Nichicon" H 5900 6650 50  0001 C CNN "Manufacturer"
F 7 "0.297" H 5900 6650 50  0001 C CNN "ALV0%€"
	1    5900 6650
	1    0    0    -1  
$EndComp
Text Label 6100 6800 0    39   ~ 0
GND
Text Label 6100 6500 0    39   ~ 0
3V3
$Comp
L authenticator-rescue:R R4
U 1 1 57BC80CD
P 5800 5700
F 0 "R4" V 5880 5700 50  0000 C CNN
F 1 "4.7k" V 5800 5700 50  0000 C CNN
F 2 "Koha-Suomi:Resistor_ThroughHole_6.3x2.3mm_Spacing2.54mm" V 5730 5700 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/219/MF-MFS-RK-18760.pdf" H 5800 5700 50  0001 C CNN
F 4 "MF1/4DC4701F" H 5800 5700 50  0001 C CNN "Model"
F 5 "Metal Film Resistors - Through Hole 4.7K 1% 100PPM" H 5800 5700 50  0001 C CNN "Title"
F 6 "KOE Speer" V 5800 5700 50  0001 C CNN "Manufacturer"
F 7 "0.231" V 5800 5700 50  0001 C CNN "ALV0%€"
	1    5800 5700
	0    -1   -1   0   
$EndComp
$Comp
L authenticator-rescue:R R1
U 1 1 57BC9DFD
P 5800 7600
F 0 "R1" V 5880 7600 50  0000 C CNN
F 1 "110" V 5800 7600 50  0000 C CNN
F 2 "Koha-Suomi:Resistor_ThroughHole_6.3x2.3mm_Spacing2.54mm" V 5730 7600 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/219/MF-MFS-RK-18760.pdf" H 5800 7600 50  0001 C CNN
F 4 "MF1/4DC1000F" H 5800 7600 50  0001 C CNN "Model"
F 5 "Metal Film Resistors - Through Hole 100ohm 1% 100PPM" H 5800 7600 50  0001 C CNN "Title"
F 6 "KOA Speer" V 5800 7600 50  0001 C CNN "Manufacturer"
F 7 "0.231" V 5800 7600 50  0001 C CNN "ALV0%€"
	1    5800 7600
	0    1    1    0   
$EndComp
$Comp
L authenticator-rescue:R R2
U 1 1 57BC9FE5
P 5800 7750
F 0 "R2" V 5880 7750 50  0000 C CNN
F 1 "220" V 5800 7750 50  0000 C CNN
F 2 "Koha-Suomi:Resistor_ThroughHole_6.3x2.3mm_Spacing2.54mm" V 5730 7750 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/219/MF-MFS-RK-18760.pdf" H 5800 7750 50  0001 C CNN
F 4 "MF1/4CCT52R2200F" H 5800 7750 50  0001 C CNN "Model"
F 5 "Metal Film Resistors - Through Hole 1/4 WATT 220 OHM 1%" H 5800 7750 50  0001 C CNN "Title"
F 6 "KOA Speer" V 5800 7750 50  0001 C CNN "Manufacturer"
F 7 "0.191" V 5800 7750 50  0001 C CNN "ALV0%€"
	1    5800 7750
	0    1    1    0   
$EndComp
$Comp
L authenticator-rescue:DS18B20+ DS1
U 1 1 57BE9EC4
P 5300 5650
F 0 "DS1" H 5250 5250 60  0000 C CNN
F 1 "DS18B20+" H 5300 5750 60  0000 C CNN
F 2 "Koha-Suomi:TO-92_Inline_Wide" H 5300 5650 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/256/DS18B20-370043.pdf" H 5300 5650 60  0001 C CNN
F 4 "DS18B20+" H 5300 5650 50  0001 C CNN "Model"
F 5 "Board Mount Temperature Sensors Prgmble Resolution 1-Wire Parasite Pwr" H 5300 5650 50  0001 C CNN "Title"
F 6 "Maxim Integrated" H 5300 5650 50  0001 C CNN "Manufacturer"
F 7 "3.53" H 5300 5650 50  0001 C CNN "ALV0%€"
	1    5300 5650
	1    0    0    -1  
$EndComp
Text Notes 4450 3700 0    118  ~ 0
Utility PCB
Text Label 5500 7700 0    39   ~ 0
GND
Text Notes 4550 7350 0    68   ~ 0
To OLED\nVSS <- 7\nVDD <- 6\nD0 <- 5\nD1 <- 4\nD2 <- 3\nCS <- 2\nRES <- 1
Text Notes 4550 7950 0    68   ~ 0
To Signal LED\nRed <- 4\nGND <- 3\nBlue <- 2\nGreen <- 1
$Comp
L authenticator-rescue:AST-1732MR-R AST1
U 1 1 59892846
P 6200 6000
F 0 "AST1" H 5900 5600 60  0000 C CNN
F 1 "AST-1732MR-R" H 5900 6000 60  0000 C CNN
F 2 "Koha-Suomi:AST-1732MR-R" H 6200 6000 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/334/AST-1732MR-R-72511.pdf" H 6200 6000 60  0001 C CNN
F 4 "AST-1732MR-R" H 6200 6000 50  0001 C CNN "Model"
F 5 "Speakers & Transducers SPEAKER 32OHM" H 6200 6000 50  0001 C CNN "Title"
F 6 "PUI Audio" H 6200 6000 50  0001 C CNN "Manufacturer"
F 7 "3.50" H 6200 6000 50  0001 C CNN "ALV0%€"
	1    6200 6000
	1    0    0    -1  
$EndComp
Text Notes 7950 9700 0    63   ~ 0
LED R\nBarcode_5V\nGND\nBarcode_D-\nLED B\nBarcode_D+\nLED G\nBarcode_GND
Text Label 6200 6250 0    39   ~ 0
GND
Text Label 7100 7700 2    39   ~ 0
3V3
Text Label 7100 7100 2    39   ~ 0
GND
Text Label 5550 5900 0    39   ~ 0
GND
Text Label 5600 5600 0    39   ~ 0
3V3
Text Notes 2200 5450 0    60   ~ 0
Heater temperature sensor
Text Notes 3800 6250 0    68   ~ 0
To external \nheater temp\nsensor
Text Notes 7750 2650 0    60   ~ 0
Heater
$Comp
L authenticator-rescue:HEADER_S_1X04 H10
U 1 1 598963E2
P 5300 7450
F 0 "H10" H 5300 8000 50  0000 C CNN
F 1 "HEADER_S_1X04" V 5400 7750 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x04_Pitch2.54mm" H 5300 7450 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0022032041_PCB_HEADERS-158390.pdf" H 5300 7450 50  0001 C CNN
F 4 "22-03-2041" H 5300 7450 50  0001 C CNN "Model"
F 5 "Headers & Wire Housings VERT PCB HDR 4P TIN PLATING" H 5300 7450 50  0001 C CNN "Title"
F 6 "Molex" H 5300 7450 50  0001 C CNN "Manufacturer"
F 7 "0.297" H 5300 7450 50  0001 C CNN "ALV0%€"
	1    5300 7450
	-1   0    0    1   
$EndComp
$Comp
L authenticator-rescue:HEADER_S_1X03 H8
U 1 1 59897297
P 4700 5450
F 0 "H8" H 4700 6000 50  0000 C CNN
F 1 "HEADER_S_1X03" V 4800 5800 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x03_Pitch2.54mm" H 4700 5450 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0022102031_PCB_HEADERS-158469.pdf" H 4700 5450 50  0001 C CNN
F 4 "22-10-2031" H 4700 5450 50  0001 C CNN "Model"
F 5 "Headers & Wire Housings VERT PCB HDR 3P GOLD PLATING" H 4700 5450 50  0001 C CNN "Title"
F 6 "Molex" H 4700 5450 50  0001 C CNN "Manufacturer"
F 7 "0.459" H 4700 5450 50  0001 C CNN "ALV0%€"
	1    4700 5450
	-1   0    0    1   
$EndComp
$Comp
L authenticator-rescue:HEADER_S_1X07 H9
U 1 1 598A60F0
P 5300 6850
F 0 "H9" H 5300 7400 50  0000 C CNN
F 1 "HEADER_S_1X07" V 5400 7000 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x07_Pitch2.54mm" H 5300 6850 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/022102074_sd-589973.pdf" H 5300 6850 50  0001 C CNN
F 4 "22-10-2074" H 5300 6850 50  0001 C CNN "Model"
F 5 "www.mouser.fi" H 5300 6850 50  0001 C CNN "Supplier"
F 6 "Headers & Wire Housings KK 100 Hdr Flat VERT 20 Au 7Ckt" H 5300 6850 50  0001 C CNN "Title"
F 7 "Molex" H 5300 6850 50  0001 C CNN "Manufacturer"
F 8 "1.52" H 5300 6850 50  0001 C CNN "ALV0%€"
	1    5300 6850
	-1   0    0    1   
$EndComp
Text Label 7100 8200 2    39   ~ 0
PIEZO
Text Label 6450 5800 0    39   ~ 0
DS18B20
Text Notes 10550 800  0    118  ~ 0
Pi RJ45 Hat
Wire Wire Line
	5500 5900 5550 5900
Wire Wire Line
	5500 6000 5500 5900
Wire Wire Line
	3050 5700 2700 5700
Wire Wire Line
	2700 5800 3050 5800
Wire Wire Line
	3050 5900 2700 5900
Wire Notes Line
	8100 10550 8100 8250
Wire Notes Line
	8850 3400 7700 3400
Wire Notes Line
	8850 2550 8850 3400
Wire Notes Line
	7700 2550 8850 2550
Wire Notes Line
	7700 3400 7700 2550
Wire Notes Line
	8850 2650 7700 2650
Wire Notes Line
	3600 5350 3600 6150
Wire Notes Line
	2150 5350 3600 5350
Wire Notes Line
	2150 5450 3600 5450
Wire Wire Line
	5000 5800 4900 5800
Wire Wire Line
	5000 6050 5000 5800
Wire Wire Line
	4900 5600 4900 5700
Wire Wire Line
	5500 5600 4900 5600
Wire Wire Line
	5500 5700 5500 5600
Wire Wire Line
	4900 6000 4900 5900
Wire Wire Line
	5500 6000 4900 6000
Connection ~ 6450 5800
Wire Wire Line
	5950 5700 6450 5700
Wire Wire Line
	5650 5700 5500 5700
Wire Wire Line
	6450 5700 6450 5800
Wire Wire Line
	5500 5800 6450 5800
Wire Wire Line
	5500 5700 5600 5600
Wire Wire Line
	5750 6700 5750 6500
Wire Wire Line
	5500 6700 5750 6700
Connection ~ 5900 6500
Connection ~ 5900 6800
Wire Wire Line
	5750 6500 5900 6500
Wire Wire Line
	5500 6800 5900 6800
Wire Wire Line
	5650 7600 5500 7600
Wire Wire Line
	5500 7800 5650 7800
Wire Wire Line
	5650 7900 5500 7900
Wire Notes Line
	4450 10550 8100 10550
Wire Wire Line
	5650 7800 5650 7750
Wire Notes Line
	4450 5000 4450 5300
Text Label 6550 7000 2    39   ~ 0
OLED_D1
Text Label 6550 6900 2    39   ~ 0
OLED_D0
Text Label 5950 7600 0    39   ~ 0
LED_R
Text Label 5950 7750 0    39   ~ 0
LED_B
Text Label 5950 7900 0    39   ~ 0
LED_G
Wire Wire Line
	6450 5800 6450 6050
Wire Wire Line
	5900 6500 6100 6500
Wire Wire Line
	5900 6800 6100 6800
Wire Notes Line
	4450 3700 8050 3700
Wire Notes Line
	4450 3500 8050 3500
Wire Wire Line
	5000 6050 6450 6050
Text Label 7500 5900 0    50   ~ 0
Heater-
Text Label 7500 9900 0    50   ~ 0
Heater-
$Comp
L authenticator-rescue:HEADER_A_1X07_F-Koha-Suomi H6
U 1 1 5D4F0EDB
P 4200 7100
F 0 "H6" H 4100 7600 50  0000 L CNN
F 1 "HEADER_A_1X07_F" V 4250 6850 50  0000 L CNN
F 2 "Koha-Suomi:Header-1x7-F (Molex 38-00-1337)" H 4200 7100 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0038001337_PCB_RECEPTACLES-159893.pdf" H 4200 7100 50  0001 C CNN
F 4 "38-00-1337" H 4200 7100 50  0001 C CNN "Model"
F 5 "Mouser" H 4200 7100 50  0001 C CNN "Supplier"
F 6 "Molex" H 4200 7100 50  0001 C CNN "Manufacturer"
F 7 "1.22" H 4200 7100 50  0001 C CNN "ALV0%€"
	1    4200 7100
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:HEADER_A_1X07_F-Koha-Suomi H5
U 1 1 5D4FFA2B
P 3200 6900
F 0 "H5" H 3100 6600 50  0000 L CNN
F 1 "HEADER_A_1X07_F" V 3250 6650 50  0000 L CNN
F 2 "Koha-Suomi:Header-1x7-F (Molex 38-00-1337)" H 3200 6900 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0038001337_PCB_RECEPTACLES-159893.pdf" H 3200 6900 50  0001 C CNN
F 4 "38-00-1337" H 3200 6900 50  0001 C CNN "Model"
F 5 "Mouser" H 3200 6900 50  0001 C CNN "Supplier"
F 6 "Molex" H 3200 6900 50  0001 C CNN "Manufacturer"
F 7 "1.22" H 3200 6900 50  0001 C CNN "ALV0%€"
	1    3200 6900
	-1   0    0    1   
$EndComp
Text Notes 3300 6550 0    50   ~ 0
OLED PCB Cable/pcb
Wire Notes Line
	2950 7400 2950 6450
$Comp
L Device:Thermistor_PTC TH1
U 1 1 5D53D764
P 7900 3150
F 0 "TH1" H 7998 3196 50  0000 L CNN
F 1 "Thermistor_PTC" H 7998 3105 50  0000 L CNN
F 2 "Koha-Suomi:1N4154TAP" H 7950 2950 50  0001 L CNN
F 3 "https://docs-emea.rs-online.com/webdocs/0f72/0900766b80f72deb.pdf" H 7900 3150 50  0001 C CNN
F 4 "HPG-2/08-75X35-12-30" H 7900 3150 50  0001 C CNN "Model"
F 5 "fi.rsdelivers.com" H 7900 3150 50  0001 C CNN "Supplier"
F 6 "Enclosure Heating Element, 18W, 80°C, 12 → 30 V ac/dc" H 7900 3150 50  0001 C CNN "Title"
F 7 "DBK Enclosures" H 7900 3150 50  0001 C CNN "Manufacturer"
F 8 "15.30" H 7900 3150 50  0001 C CNN "ALV0%€"
	1    7900 3150
	1    0    0    -1  
$EndComp
Text Label 2750 5900 0    50   ~ 0
HT_GND
Text Label 2750 5800 0    50   ~ 0
HT_DQ
Text Label 2750 5700 0    50   ~ 0
HT_VDD
Text Label 3450 7300 0    50   ~ 0
Cable_RES
Text Label 3450 7200 0    50   ~ 0
Cable_CS
Text Label 3450 7100 0    50   ~ 0
Cable_D2
Text Label 3450 7000 0    50   ~ 0
Cable_D1
Text Label 3450 6900 0    50   ~ 0
Cable_D0
Text Label 3450 6800 0    50   ~ 0
Cable_VDD
Text Label 3450 6700 0    50   ~ 0
Cable__VSS
Wire Wire Line
	3400 6700 4000 6700
Wire Wire Line
	4000 6800 3400 6800
Wire Wire Line
	3400 6900 4000 6900
Wire Wire Line
	3400 7000 4000 7000
Wire Wire Line
	4000 7100 3400 7100
Wire Wire Line
	3400 7200 4000 7200
Wire Wire Line
	4000 7300 3400 7300
Wire Notes Line
	2950 6450 4450 6450
Wire Notes Line
	2950 6550 4450 6550
Wire Notes Line
	2950 7400 4450 7400
$Comp
L authenticator-rescue:Dupont_Cable_3-pin-Koha-Suomi DUP2
U 1 1 5D2B92A9
P 4000 5900
F 0 "DUP2" H 4000 5950 50  0000 C CNN
F 1 "Dupont_Cable_3-pin" H 4000 6250 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" H 4000 5900 50  0001 C CNN
F 3 "" H 4000 5900 50  0001 C CNN
F 4 "20cm" H 4000 6150 50  0000 C CNN "Length"
F 5 "2.54 pitch 3-wire cable" H 4000 5900 50  0001 C CNN "Model"
F 6 "2" H 4000 5900 50  0001 C CNN "ALV0%€"
	1    4000 5900
	1    0    0    -1  
$EndComp
Text Notes 8350 3100 0    39   ~ 0
This model of\nPTC heater has\ncable built-in
$Comp
L authenticator-rescue:Cat-cable-Koha-Suomi CAT1
U 1 1 5D3638A4
P 9300 9350
F 0 "CAT1" H 8850 9250 50  0000 C CNN
F 1 "Cat-cable red" H 9300 9550 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" V 9300 9375 50  0001 C CNN
F 3 "https://fi.rsdelivers.com/product/rs-pro/21991361-70/rs-pro-red-cat6-cable-s-ftp-pvc-male-rj45-male/0411481" V 9300 9375 50  0001 C CNN
F 4 "5m" H 9650 9350 50  0000 C CNN "Length"
F 5 "411-481" H 9300 9350 50  0001 C CNN "Model"
F 6 "RS PRO Red Cat6 Cable S/FTP PVC Male RJ45/Male RJ45, 5m" H 9300 9350 50  0001 C CNN "Title"
F 7 "fi.rsdelivers.com" H 9300 9350 50  0001 C CNN "Supplier"
F 8 "RS PRO" H 9300 9350 50  0001 C CNN "Manufacturer"
F 9 "6.90" H 9300 9350 50  0001 C CNN "ALV0%€"
	1    9300 9350
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:Cat-cable-Koha-Suomi CAT2
U 1 1 5D363C6D
P 9300 8400
F 0 "CAT2" H 8850 8300 50  0000 C CNN
F 1 "Cat-cable blue" H 9300 8600 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" V 9300 8425 50  0001 C CNN
F 3 "https://fi.rsdelivers.com/product/rs-pro/21991364-70/rs-pro-blue-cat6-cable-s-ftp-pvc-male-rj45-male/0411172" V 9300 8425 50  0001 C CNN
F 4 "5m" H 9650 8400 50  0000 C CNN "Length"
F 5 "411-172" H 9300 8400 50  0001 C CNN "Model"
F 6 "RS PRO Blue Cat6 Cable S/FTP PVC Male RJ45/Male RJ45, 5m " H 9300 8400 50  0001 C CNN "Title"
F 7 "fi.rsdelivers.com" H 9300 8400 50  0001 C CNN "Supplier"
F 8 "RS PRO" H 9300 8400 50  0001 C CNN "Manufacturer"
F 9 "6.90" H 9300 8400 50  0001 C CNN "ALV0%€"
	1    9300 8400
	1    0    0    -1  
$EndComp
Wire Notes Line
	10550 800  11650 800 
Wire Notes Line
	10950 600  15850 600 
Wire Notes Line
	15850 5150 15850 9750
Wire Notes Line
	9350 7500 9350 11200
Wire Notes Line
	9250 7500 9250 11200
Wire Notes Line
	9250 6900 9250 6650
Wire Notes Line
	9350 6650 9350 6900
Text Notes 9450 800  0    197  ~ 0
INSIDE
Text Notes 7900 800  0    197  ~ 0
OUTSIDE
Wire Notes Line
	8050 3500 8050 4600
Wire Notes Line
	4450 3500 4450 4650
$Comp
L Mechanical:Heatsink HS2
U 1 1 5D54EE06
P 8200 2950
F 0 "HS2" H 8150 3200 50  0000 L CNN
F 1 "Heatsink" H 8050 3150 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 8212 2950 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/2/Aavid-Board-Level-Heatsinks-Catalog-2018-1507171.pdf" H 8212 2950 50  0001 C CNN
F 4 "374624B00032G" H 8200 2950 50  0001 C CNN "Model"
F 5 "Heat Sinks Heatsink for Metal/Ceramic BGA Packages, Black Anodized, 35x35x10mm, IC Pkg Size = 35 x 35, Tape #32" H 8200 2950 50  0001 C CNN "Title"
F 6 "Aavid" H 8200 2950 50  0001 C CNN "Manufacturer"
F 7 "5.49" H 8200 2950 50  0001 C CNN "ALV0%€"
	1    8200 2950
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Heatsink HS1
U 1 1 5D5517FB
P 7900 2950
F 0 "HS1" H 7850 3200 50  0000 L CNN
F 1 "Heatsink" H 7750 3150 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 7912 2950 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/2/Aavid-Board-Level-Heatsinks-Catalog-2018-1507171.pdf" H 7912 2950 50  0001 C CNN
F 4 "374624B00032G" H 7900 2950 50  0001 C CNN "Model"
F 5 "Heat Sinks Heatsink for Metal/Ceramic BGA Packages, Black Anodized, 35x35x10mm, IC Pkg Size = 35 x 35, Tape #32" H 7900 2950 50  0001 C CNN "Title"
F 6 "Aavid" H 7900 2950 50  0001 C CNN "Manufacturer"
F 7 "5.49" H 7900 2950 50  0001 C CNN "ALV0%€"
	1    7900 2950
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:DS18B20+ DS2
U 1 1 5D586CB7
P 2500 5650
F 0 "DS2" H 2450 5250 60  0000 C CNN
F 1 "DS18B20+" H 2500 5750 60  0000 C CNN
F 2 "Koha-Suomi:TO-92_Inline_Wide" H 2500 5650 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/256/DS18B20-370043.pdf" H 2500 5650 60  0001 C CNN
F 4 "DS18B20+" H 2500 5650 50  0001 C CNN "Model"
F 5 "Board Mount Temperature Sensors Prgmble Resolution 1-Wire Parasite Pwr" H 2500 5650 50  0001 C CNN "Title"
F 6 "Maxim Integrated" H 2500 5650 50  0001 C CNN "Manufacturer"
F 7 "3.53" H 2500 5650 50  0001 C CNN "ALV0%€"
	1    2500 5650
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:R R3
U 1 1 5D5969E7
P 5800 7900
F 0 "R3" V 5880 7900 50  0000 C CNN
F 1 "220" V 5800 7900 50  0000 C CNN
F 2 "Koha-Suomi:Resistor_ThroughHole_6.3x2.3mm_Spacing2.54mm" V 5730 7900 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/219/MF-MFS-RK-18760.pdf" H 5800 7900 50  0001 C CNN
F 4 "MF1/4CCT52R2200F" H 5800 7900 50  0001 C CNN "Model"
F 5 "Metal Film Resistors - Through Hole 1/4 WATT 220 OHM 1%" H 5800 7900 50  0001 C CNN "Title"
F 6 "KOA Speer" V 5800 7900 50  0001 C CNN "Manufacturer"
F 7 "0.191" V 5800 7900 50  0001 C CNN "ALV0%€"
	1    5800 7900
	0    1    1    0   
$EndComp
Wire Notes Line
	9250 4500 9250 6150
Wire Notes Line
	9350 4500 9350 6150
Wire Notes Line
	9350 4000 9350 500 
Wire Notes Line
	9250 4000 9250 500 
$Comp
L authenticator-rescue:HEADER_S_1X03 H2
U 1 1 5D29BFB2
P 3250 5450
F 0 "H2" H 3250 6000 50  0000 C CNN
F 1 "HEADER_S_1X03" V 3350 5800 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x03_Pitch2.54mm" H 3250 5450 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0022102031_PCB_HEADERS-158469.pdf" H 3250 5450 50  0001 C CNN
F 4 "22-10-2031" H 3250 5450 50  0001 C CNN "Model"
F 5 "Headers & Wire Housings VERT PCB HDR 3P GOLD PLATING" H 3250 5450 50  0001 C CNN "Title"
F 6 "Molex" H 3250 5450 50  0001 C CNN "Manufacturer"
F 7 "0.459" H 3250 5450 50  0001 C CNN "ALV0%€"
	1    3250 5450
	1    0    0    1   
$EndComp
$Comp
L authenticator-rescue:SoC-Koha-Suomi SOC1
U 1 1 5D33119C
P 16350 300
F 0 "SOC1" H 16250 200 50  0000 L CNN
F 1 "SoC" H 16250 500 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 16350 300 50  0001 C CNN
F 3 "" H 16350 300 50  0001 C CNN
F 4 "Raspberry Pi 3 Model B+" H 16350 300 50  0001 C CNN "Model"
F 5 "Raspberry Pi" H 16350 300 50  0001 C CNN "Manufacturer"
F 6 "fi.rsdelivers.com" H 16350 300 50  0001 C CNN "Supplier"
F 7 "Raspberry Pi 3 Model B+" H 16350 300 50  0001 C CNN "Title"
F 8 "39.30" H 16350 300 50  0001 C CNN "ALV0%€"
	1    16350 300 
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:SD_Card-Koha-Suomi SD1
U 1 1 5D333748
P 16350 750
F 0 "SD1" H 16300 700 50  0000 L CNN
F 1 "SD_Card" H 16200 950 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 16350 750 50  0001 C CNN
F 3 "" H 16350 750 50  0001 C CNN
F 4 "NOOBS_32GB_Retail" H 16350 750 50  0001 C CNN "Model"
F 5 "SD Card preloaded with NOOBS - 32GB" H 16350 750 50  0001 C CNN "Title"
F 6 "fi.rsdelivers.com" H 16350 750 50  0001 C CNN "Supplier"
F 7 "Raspberry Pi" H 16350 750 50  0001 C CNN "Manufacturer"
F 8 "12" H 16350 750 50  0001 C CNN "ALV0%€"
	1    16350 750 
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:Wall_PSU_5V-Koha-Suomi U1
U 1 1 5D3356C2
P 16450 1600
F 0 "U1" H 16350 1700 50  0000 L CNN
F 1 "Wall_PSU_5V" H 16250 1850 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 16450 1600 50  0001 C CNN
F 3 "" H 16450 1600 50  0001 C CNN
F 4 "T6716DV" H 16450 1600 50  0001 C CNN "Model"
F 5 "Raspberry Pi" H 16450 1600 50  0001 C CNN "Manufacturer"
F 6 "Raspberry Pi, 13W Plug In Power Supply 5.1V, 2.5A, 1 Output, 2-Pin Type C - EuroPlug" H 16450 1600 50  0001 C CNN "Title"
F 7 "fi.rsdelivers.com" H 16450 1600 50  0001 C CNN "Supplier"
F 8 "6.90" H 16450 1600 50  0001 C CNN "ALV0%€"
	1    16450 1600
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:RPi_Enclosure-Koha-Suomi RPE1
U 1 1 5D336DF3
P 16500 1150
F 0 "RPE1" H 16750 1150 50  0000 L CNN
F 1 "RPi_Enclosure" H 16750 1250 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 16500 1150 50  0001 C CNN
F 3 "" H 16500 1150 50  0001 C CNN
F 4 "ASM-1900036-12_Bulk" H 16500 1150 50  0001 C CNN "Model"
F 5 "Raspberry Pi 3 Enclosure, White (bulk)" H 16500 1150 50  0001 C CNN "Title"
F 6 "DesignSpark" H 16500 1150 50  0001 C CNN "Manufacturer"
F 7 "fi.rsdelivers.com" H 16500 1150 50  0001 C CNN "Supplier"
F 8 "5.40" H 16500 1150 50  0001 C CNN "ALV0%€"
	1    16500 1150
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:USB-Stick-Koha-Suomi US1
U 1 1 5D338938
P 16450 1900
F 0 "US1" H 16778 1946 50  0000 L CNN
F 1 "USB-Stick" H 16778 1855 50  0000 L CNN
F 2 "" H 16450 1900 50  0001 C CNN
F 3 "" H 16450 1900 50  0001 C CNN
F 4 "THN-U401S0320E4" H 16450 1900 50  0001 C CNN "Model"
F 5 "Toshiba 32GB TransMemory USB2.0 Metal" H 16450 1900 50  0001 C CNN "Title"
F 6 "Toshiba" H 16450 1900 50  0001 C CNN "Manufacturer"
F 7 "fi.rsdelivers.com" H 16450 1900 50  0001 C CNN "Supplier"
F 8 "17.20" H 16450 1900 50  0001 C CNN "ALV0%€"
	1    16450 1900
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:Standoff-Koha-Suomi STO1
U 1 1 5D416427
P 16300 3000
F 0 "STO1" V 16300 2750 50  0000 L CNN
F 1 "Standoff x2" H 16200 2650 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 16300 3000 50  0001 C CNN
F 3 "" H 16300 3000 50  0001 C CNN
F 4 "2337" V 16300 3000 50  0001 C CNN "Model"
F 5 "Adafruit Brass M2.5 Standoffs 16mm tall - Black Plated - Pack of 2" V 16300 3000 50  0001 C CNN "Title"
F 6 "Adafruit" V 16300 3000 50  0001 C CNN "Manufacturer"
F 7 "thepihut.com" V 16300 3000 50  0001 C CNN "Supplier"
F 8 "1.14" V 16300 3000 50  0001 C CNN "ALV0%€"
	1    16300 3000
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:LED_Holder_SML1083_fitting-Koha-Suomi LHI1
U 1 1 5D2D2617
P 1550 9700
F 0 "LHI1" H 1500 9800 50  0000 L CNN
F 1 "LED_Holder_SML1083_fitting" H 1150 9900 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 1550 9700 50  0001 C CNN
F 3 "" H 1550 9700 50  0001 C CNN
F 4 "3D printed" H 1550 9700 50  0001 C CNN "Supplier"
F 5 "10" H 1550 9700 50  0001 C CNN "ALV0%€"
	1    1550 9700
	1    0    0    -1  
$EndComp
Wire Notes Line
	2000 8400 2000 10200
$Comp
L authenticator-rescue:Led_Holder_SML1083-Koha-Suomi LH1
U 1 1 5D2B05DC
P 850 9700
F 0 "LH1" H 700 9800 50  0000 L CNN
F 1 "Led_Holder_SML1083" H 650 9450 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 850 9700 50  0001 C CNN
F 3 "" H 850 9700 50  0001 C CNN
F 4 " SML1083" H 850 9700 50  0001 C CNN "Model"
F 5 "5mm LEDKEHYS/O-RENG./LINSSI, KROMI" H 850 9700 50  0001 C CNN "Title"
F 6 "?" H 850 9700 50  0001 C CNN "Manufacturer"
F 7 "www.yeint.fi" H 850 9700 50  0001 C CNN "Supplier"
F 8 "2.19" H 850 9700 50  0001 C CNN "ALV0%€"
	1    850  9700
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:HEADER_S_1X04 H3
U 1 1 5D58B626
P 1700 8700
F 0 "H3" H 1700 9250 50  0000 C CNN
F 1 "HEADER_S_1X04" V 1800 9000 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x04_Pitch2.54mm" H 1700 8700 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0022032041_PCB_HEADERS-158390.pdf" H 1700 8700 50  0001 C CNN
F 4 "22-03-2041" H 1700 8700 50  0001 C CNN "Model"
F 5 "Headers & Wire Housings VERT PCB HDR 4P TIN PLATING" H 1700 8700 50  0001 C CNN "Title"
F 6 "Molex" H 1700 8700 50  0001 C CNN "Manufacturer"
F 7 "0.297" H 1700 8700 50  0001 C CNN "ALV0%€"
	1    1700 8700
	1    0    0    1   
$EndComp
$Comp
L authenticator-rescue:Dupont_Cable_4-pin-Koha-Suomi DUP1
U 1 1 5D306F9D
P 2400 9050
F 0 "DUP1" H 2400 9000 50  0000 C CNN
F 1 "Dupont_Cable_4-pin" H 2400 9400 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" H 2400 9050 50  0001 C CNN
F 3 "" H 2400 9050 50  0001 C CNN
F 4 "20cm" H 2400 9300 50  0000 C CNN "Length"
F 5 "2.54 pitch 4-wire cable" H 2400 9050 50  0001 C CNN "Model"
F 6 "2" H 2400 9050 50  0001 C CNN "ALV0%€"
	1    2400 9050
	1    0    0    -1  
$EndComp
Text Label 1250 9200 0    50   ~ 0
G3,3V
Text Label 1250 9000 0    50   ~ 0
B3,4V
Text Label 1250 8800 0    50   ~ 0
R1,9V
Wire Wire Line
	1250 9200 1350 9200
Wire Wire Line
	1250 8800 1350 8800
Wire Wire Line
	650  9400 1300 9400
Wire Wire Line
	650  9000 650  9400
Wire Wire Line
	1350 9200 1350 9150
Wire Wire Line
	1350 8800 1350 8850
Wire Notes Line
	550  8400 550  10200
Wire Notes Line
	2000 8400 550  8400
Wire Notes Line
	550  8500 2000 8500
Wire Notes Line
	550  10200 2000 10200
Wire Wire Line
	1350 9150 1500 9150
Wire Wire Line
	1350 8850 1500 8850
Wire Wire Line
	1250 9000 1250 9050
Wire Wire Line
	1250 9050 1500 9050
Wire Wire Line
	1300 9400 1300 8950
Wire Wire Line
	1300 8950 1500 8950
$Comp
L authenticator-rescue:WP154A4SUREQBFZGC LED1
U 1 1 598ADADE
P 950 9000
F 0 "LED1" H 1000 9100 50  0000 C CNN
F 1 "WP154A4SUREQBFZGC" H 1000 9350 50  0000 C CNN
F 2 "Koha-Suomi:WP154A4SUREQBFZGC" H 900 8950 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/216/WP154A4SUREQBFZGC-1173568.pdf" H 900 8950 50  0001 C CNN
F 4 "WP154A4SUREQBFZGC" H 950 9000 50  0001 C CNN "Model"
F 5 "Standard LEDs - Through Hole RGB 630/525/465nm 750/420/750mcd 60Deg" H 950 9000 50  0001 C CNN "Title"
F 6 "Kingbright" H 950 9000 50  0001 C CNN "Manufacturer"
F 7 "1.65" H 950 9000 50  0001 C CNN "ALV0%€"
	1    950  9000
	1    0    0    -1  
$EndComp
Text Notes 750  8500 0    60   ~ 0
Signal LED
$Comp
L authenticator-rescue:NHD-0420CW-AB3 NHD?
U 1 1 5EC143A1
P 1500 6900
AR Path="/598B2508/5EC143A1" Ref="NHD?"  Part="1" 
AR Path="/5EC143A1" Ref="NHD1"  Part="1" 
F 0 "NHD1" H 2700 6050 60  0000 C CNN
F 1 "NHD-0420CW-AB3" H 1300 6050 60  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x20_Pitch2.54mm" H 1500 6900 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/291/NHD-0420CW-AY3-587980.pdf" H 1500 6900 60  0001 C CNN
F 4 "NHD-0420CW-AY3" H 1500 6900 50  0001 C CNN "Model"
F 5 "OLED Displays & Accessories 4x20 Yellow Slim Character OLED" H 1500 6900 50  0001 C CNN "Title"
F 6 "Newhaven Display" H 1500 6900 50  0001 C CNN "Manufacturer"
F 7 "25.06" H 1500 6900 50  0001 C CNN "ALV0%€"
	1    1500 6900
	0    1    1    0   
$EndComp
Text Notes 600  6150 0    60   ~ 0
OLED display over SPI
Wire Notes Line
	550  6050 550  8350
Wire Notes Line
	550  6150 1700 6150
Wire Notes Line
	1700 6050 550  6050
$Comp
L authenticator-rescue:Enclosure_Gasket_1550KSGASKET-Koha-Suomi EG1
U 1 1 5D2E9E16
P 7150 1000
F 0 "EG1" H 7100 1100 50  0000 L CNN
F 1 "DIY Gasket" H 6900 850 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 7150 1000 50  0001 C CNN
F 3 "" H 7150 1000 50  0001 C CNN
F 4 "" H 7150 1000 50  0001 C CNN "Model"
F 5 "Joensuun Kumipörssi" H 7150 1000 50  0001 C CNN "Manufacturer"
F 6 "Tiivistenauha mahd. kapea" H 7150 1000 50  0001 C CNN "Title"
F 7 "10" H 7150 1000 50  0001 C CNN "ALV0%€"
	1    7150 1000
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Housing N1
U 1 1 5D2E0360
P 9600 1150
F 0 "N1" H 9500 1250 50  0000 L CNN
F 1 "Internal enclosure" H 9250 900 50  0000 L CNN
F 2 "" H 9650 1200 50  0001 C CNN
F 3 "https://www.ikea.com/fi/fi/p/lixhult-kaappi-metalli-valkoinen-50328665/" H 9650 1200 50  0001 C CNN
F 4 "LIXHULT" H 9600 1150 50  0001 C CNN "Model"
F 5 "LIXHULT Kaappi, metalli, valkoinen, 25x25 cm" H 9600 1150 50  0001 C CNN "Title"
F 6 "IKEA" H 9600 1150 50  0001 C CNN "Manufacturer"
F 7 "12.10" H 9600 1150 50  0001 C CNN "ALV0%€"
	1    9600 1150
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Housing N2
U 1 1 5F1B1EB0
P 7700 900
F 0 "N2" H 7600 1000 50  0000 L CNN
F 1 "External enclosure" H 7350 650 50  0000 L CNN
F 2 "" H 7750 950 50  0001 C CNN
F 3 "" H 7750 950 50  0001 C CNN
F 4 "" H 7700 900 50  0001 C CNN "Model"
F 5 "Laser cut enclosure sheets that are glued together. Price varies based on customer needs." H 7700 900 50  0001 C CNN "Title"
F 6 "cotter.co" H 7700 900 50  0001 C CNN "Manufacturer"
F 7 "100" H 7700 900 50  0001 C CNN "ALV0%€"
	1    7700 900 
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:Housing N3
U 1 1 5F237B60
P 9350 1700
F 0 "N3" H 9250 1800 50  0000 L CNN
F 1 "PCB printing and shipping" H 8850 1450 50  0000 L CNN
F 2 "" H 9400 1750 50  0001 C CNN
F 3 "" H 9400 1750 50  0001 C CNN
F 4 "" H 9350 1700 50  0001 C CNN "Model"
F 5 "PCB printing and shipping (constant R&D no batch orders)" H 9350 1700 50  0001 C CNN "Title"
F 6 "allpcb.com" H 9350 1700 50  0001 C CNN "Manufacturer"
F 7 "20" H 9350 1700 50  0001 C CNN "ALV0%€"
	1    9350 1700
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:KeyPad KP1
U 1 1 5F9741E9
P 3300 10200
F 0 "KP1" H 3358 10665 50  0000 C CNN
F 1 "KeyPad" H 3358 10574 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 3450 10000 50  0001 C CNN
F 3 "https://www.alibaba.com/product-detail/12-Keys-3x4-Matrix-USB-Industrial_62481305463.html?spm=a2700.galleryofferlist.normal_offer.d_title.60bd3f50WgxjjT" H 3450 10000 50  0001 C CNN
F 4 "Davo Electronics" H 3300 10200 50  0001 C CNN "Supplier"
F 5 "D-8208J" H 3300 10200 50  0001 C CNN "Model"
F 6 "34" H 3300 10200 50  0001 C CNN "ALV0%€"
	1    3300 10200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 10050 4300 10050
Wire Wire Line
	3650 10150 4300 10150
Wire Wire Line
	3650 10250 4300 10250
Wire Wire Line
	3650 10350 4300 10350
NoConn ~ 4300 10050
NoConn ~ 4300 10150
NoConn ~ 4300 10250
NoConn ~ 4300 10350
Text Notes 3600 10000 0    50   ~ 0
Attached 2.54mm\npitch matrix cable
Wire Notes Line
	3550 9850 3550 10400
Wire Notes Line
	3550 10400 4300 10400
Wire Notes Line
	4300 10400 4300 9850
Wire Notes Line
	4300 9850 3550 9850
Text Label 4900 10050 0    39   ~ 0
KeyPadRX
Text Label 4900 10150 0    39   ~ 0
KeyPadTX
Text Label 4900 10350 0    39   ~ 0
KeyPadPSU+
Text Label 4900 10250 0    50   ~ 0
GND
Wire Wire Line
	6050 10050 6050 9150
Wire Wire Line
	6050 9150 6550 9150
Wire Wire Line
	6150 10150 6150 9250
Wire Wire Line
	6150 9250 6650 9250
Wire Wire Line
	6650 9250 6650 8400
Wire Wire Line
	4900 10050 6050 10050
Wire Wire Line
	4900 10150 6150 10150
Wire Wire Line
	5850 10350 4900 10350
$Comp
L authenticator-rescue:HEADER_S_1X04 H1
U 1 1 5F9ED90C
P 4700 9900
F 0 "H1" H 4700 10450 50  0000 C CNN
F 1 "HEADER_S_1X04" V 4800 10200 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x04_Pitch2.54mm" H 4700 9900 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0022032041_PCB_HEADERS-158390.pdf" H 4700 9900 50  0001 C CNN
F 4 "22-03-2041" H 4700 9900 50  0001 C CNN "Model"
F 5 "Headers & Wire Housings VERT PCB HDR 4P TIN PLATING" H 4700 9900 50  0001 C CNN "Title"
F 6 "Molex" H 4700 9900 50  0001 C CNN "Manufacturer"
F 7 "0.297" H 4700 9900 50  0001 C CNN "ALV0%€"
	1    4700 9900
	-1   0    0    1   
$EndComp
$Comp
L authenticator-rescue:R R5
U 1 1 6001D467
P 5850 9600
F 0 "R5" V 5950 9600 50  0000 C CNN
F 1 "50" V 5850 9600 50  0000 C CNN
F 2 "Koha-Suomi:Resistor_ThroughHole_6.3x2.3mm_Spacing2.54mm" V 5780 9600 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/219/MOS-16613.pdf" H 5850 9600 50  0001 C CNN
F 4 "MOS1CT528R510J" H 5850 9600 50  0001 C CNN "Model"
F 5 "Metal Oxide Resistors 51 ohm 5% 1W" H 5850 9600 50  0001 C CNN "Title"
F 6 "KOE Speer" V 5850 9600 50  0001 C CNN "Manufacturer"
F 7 "0.101" V 5850 9600 50  0001 C CNN "ALV0%€"
	1    5850 9600
	-1   0    0    1   
$EndComp
Wire Wire Line
	5850 9750 5850 10350
Wire Wire Line
	5850 8950 5850 9450
$Comp
L authenticator-rescue:Cat-cable-Koha-Suomi CAT3
U 1 1 601F223E
P 9300 7350
F 0 "CAT3" H 8850 7250 50  0000 C CNN
F 1 "Cat-cable green" H 9300 7550 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" V 9300 7375 50  0001 C CNN
F 3 "~" V 9300 7375 50  0001 C CNN
F 4 "5m" H 9650 7350 50  0000 C CNN "Length"
F 5 " 411-485" H 9300 7350 50  0001 C CNN "Model"
F 6 "RS PRO Green Cat6 Cable S/FTP PVC Male RJ45/Male RJ45, 5m" H 9300 7350 50  0001 C CNN "Title"
F 7 "fi.rsdelivers.com" H 9300 7350 50  0001 C CNN "Supplier"
F 8 "RS PRO" H 9300 7350 50  0001 C CNN "Manufacturer"
F 9 "6.90" H 9300 7350 50  0001 C CNN "ALV0%€"
	1    9300 7350
	1    0    0    -1  
$EndComp
Text Label 7500 7900 0    50   ~ 0
Heater-
$Comp
L authenticator-rescue:WGC-300-USB-AT BCR1
U 1 1 602941DD
P 9150 5500
F 0 "BCR1" H 9150 5300 50  0000 C CNN
F 1 "WGC-300-USB-AT" V 9500 4850 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" H 9150 5500 50  0001 C CNN
F 3 "https://www.winsonchina.com/wgc-300-1d-ccd-fix-mounted-barcode-scanner-p00060p1.html" H 9150 5500 50  0001 C CNN
F 4 "Winson China" H 9150 5500 50  0001 C CNN "Manufacturer"
F 5 "WGC-300-USB-AT" H 9150 5500 50  0001 C CNN "Model"
F 6 "30" H 9150 5500 50  0001 C CNN "ALV0%€"
	1    9150 5500
	0    1    1    0   
$EndComp
Wire Wire Line
	8700 5650 8400 5650
Wire Wire Line
	8700 5550 8400 5550
Wire Wire Line
	8700 5450 8400 5450
Wire Wire Line
	8700 5350 8400 5350
NoConn ~ 8400 5350
NoConn ~ 8400 5450
NoConn ~ 8400 5550
NoConn ~ 8400 5650
Wire Notes Line
	8050 5300 9100 5300
Wire Notes Line
	9100 5800 8050 5800
Wire Notes Line
	8050 5900 9100 5900
Wire Notes Line
	8050 5900 8050 5300
Wire Notes Line
	9100 5900 9100 5300
Text Label 7650 5650 2    50   ~ 0
Barcode_5V
Text Label 7650 5550 2    50   ~ 0
Barcode_D-
Text Label 7650 5450 2    50   ~ 0
Barcode_D+
Text Label 7650 5350 2    50   ~ 0
Barcode_GND
Text Notes 9100 5650 0    50   ~ 0
Has attached USB-cable.\nCut it and use the male\nhead to plug to raspberry pi
Wire Notes Line
	2150 6150 2150 5350
Wire Notes Line
	3600 6150 2150 6150
$Comp
L authenticator-rescue:Cat-cable-Koha-Suomi CAT4
U 1 1 6090675E
P 9300 6450
F 0 "CAT4" H 8850 6350 50  0000 C CNN
F 1 "Cat-cable yellow" H 9300 6650 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" V 9300 6475 50  0001 C CNN
F 3 "https://fi.rsdelivers.com/product/rs-pro/21991362-70/rs-pro-yellow-cat6-cable-s-ftp-pvc-male-rj45-male/0411491" V 9300 6475 50  0001 C CNN
F 4 "5m" H 9650 6450 50  0000 C CNN "Length"
F 5 "411-491" H 9300 6450 50  0001 C CNN "Model"
F 6 "RS PRO Yellow Cat6 Cable S/FTP PVC Male RJ45/Male RJ45, 5m" H 9300 6450 50  0001 C CNN "Title"
F 7 "fi.rsdelivers.com" H 9300 6450 50  0001 C CNN "Supplier"
F 8 "RS PRO" H 9300 6450 50  0001 C CNN "Manufacturer"
F 9 "6.90" H 9300 6450 50  0001 C CNN "ALV0%€"
	1    9300 6450
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:RJ45_2xPort-Koha-Suomi RJ1
U 1 1 6092C2D1
P 8250 6550
F 0 "RJ1" H 9100 6400 50  0000 R CNN
F 1 "RJ45_2xPort-Koha-Suomi" V 9050 7650 50  0000 R CNN
F 2 "Koha-Suomi:RJ45 dual port - WE-15016137621" H 8250 6550 50  0001 C CNN
F 3 "https://katalog.we-online.com/em/datasheet/615016137621.pdf" H 8250 6550 50  0001 C CNN
F 4 "3.51" H 8250 6550 50  0001 C CNN "ALV0%€"
F 5 "Wurth Elektronik" H 8250 6550 50  0001 C CNN "Manufacturer"
F 6 "615016137621" H 8250 6550 50  0001 C CNN "Model"
F 7 "Modular Connectors / Ethernet Connectors WR-MJ Feml Shielded 8P8C Hztl Dual Port" H 8250 6550 50  0001 C CNN "Title"
	1    8250 6550
	-1   0    0    1   
$EndComp
$Comp
L Connector:Screw_Terminal_01x04 J2
U 1 1 610657C4
P 7850 5450
F 0 "J2" H 7800 5650 50  0000 L CNN
F 1 "Screw_Terminal_01x04" V 7950 5000 50  0000 L CNN
F 2 "Koha-Suomi:Terminal 1x4 (Molex-398800304)" H 7850 5450 50  0001 C CNN
F 3 "https://www.molex.com/pdm_docs/sd/398800304_sd.pdf" H 7850 5450 50  0001 C CNN
F 4 "1.16" H 7850 5450 50  0001 C CNN "ALV0%€"
F 5 "Molex" H 7850 5450 50  0001 C CNN "Manufacturer"
F 6 "39880-0304" H 7850 5450 50  0001 C CNN "Model"
F 7 "Fixed Terminal Blocks LOW PROFILE 5.08 4 A W PROFILE 5.08 4 ASY" H 7850 5450 50  0001 C CNN "Title"
F 8 "" H 7850 5450 50  0001 C CNN "Field8"
	1    7850 5450
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:RJ45_2xPort-Koha-Suomi RJ3
U 1 1 60C21998
P 10200 1550
F 0 "RJ3" H 11050 1400 50  0000 R CNN
F 1 "RJ45_2xPort-Koha-Suomi" V 11000 2650 50  0000 R CNN
F 2 "Koha-Suomi:RJ45 dual port - WE-15016137621" H 10200 1550 50  0001 C CNN
F 3 "https://katalog.we-online.com/em/datasheet/615016137621.pdf" H 10200 1550 50  0001 C CNN
F 4 "3.51" H 10200 1550 50  0001 C CNN "ALV0%€"
F 5 "Wurth Elektronik" H 10200 1550 50  0001 C CNN "Manufacturer"
F 6 "615016137621" H 10200 1550 50  0001 C CNN "Model"
F 7 "Modular Connectors / Ethernet Connectors WR-MJ Feml Shielded 8P8C Hztl Dual Port" H 10200 1550 50  0001 C CNN "Title"
	1    10200 1550
	1    0    0    1   
$EndComp
Text Notes 10550 4700 2    63   ~ 0
\nHeater-\nHeater-\nHeater-\nHeater-\nHeater+\nHeater+\nHeater+\nHeater+
Text Notes 10550 3800 2    63   ~ 0
\nKeyPadPSU+\nPIEZO\nKeyPadRX\nKeyPadTX\nDS18B20\n-\n-\n-
Text Notes 10550 2700 2    62   ~ 0
\nEncl Door\nGND\nCS (CS)\nD0 (SCLK)\nD2 (SDOUT)\nRES (RES)\nD1 (SDIN)\n3V3
Text Notes 13850 1350 0    50   ~ 0
USB Type-A\nMale to\nRaspberry Pi
Text Label 11350 1200 0    39   ~ 0
PiHat_Barcode_5V
Text Label 11350 1400 0    39   ~ 0
PiHat_Barcode_D-
Text Label 11350 1600 0    39   ~ 0
PiHat_Barcode_D+
Text Label 11350 1800 0    39   ~ 0
PiHat_Barcode_GND
$Comp
L Connector:Screw_Terminal_01x04 J5
U 1 1 6050CE51
P 13750 1250
F 0 "J5" H 13700 1450 50  0000 L CNN
F 1 "Screw_Terminal_01x04" H 13350 1550 50  0000 L CNN
F 2 "Koha-Suomi:Terminal 1x4 (Molex-398800304)" H 13750 1250 50  0001 C CNN
F 3 "https://www.molex.com/pdm_docs/sd/398800304_sd.pdf" H 13750 1250 50  0001 C CNN
F 4 "1.16" H 13750 1250 50  0001 C CNN "ALV0%€"
F 5 "Molex" H 13750 1250 50  0001 C CNN "Manufacturer"
F 6 "39880-0304" H 13750 1250 50  0001 C CNN "Model"
F 7 "Fixed Terminal Blocks LOW PROFILE 5.08 4 A W PROFILE 5.08 4 ASY" H 13750 1250 50  0001 C CNN "Title"
F 8 "" H 13750 1250 50  0001 C CNN "Field8"
	1    13750 1250
	1    0    0    -1  
$EndComp
Text Label 17250 5900 2    50   ~ 0
PiHat_Heater-
Text Label 17250 5300 2    50   ~ 0
PiHat_Heater+
Text Label 11350 3300 0    39   ~ 0
PiHat_KeyPad_RX
Text Label 11350 3400 0    39   ~ 0
PiHat_KeyPad_TX
Text Label 11350 3100 0    39   ~ 0
PiHAT_KeyPad_5V
Wire Notes Line
	12700 9750 15850 9750
Wire Notes Line
	17550 5100 17550 6000
$Comp
L pspice:VSOURCE V1
U 1 1 5D5A6738
P 17250 5600
F 0 "V1" H 17100 5600 50  0000 L CNN
F 1 "+12V" H 17250 5600 50  0000 L CNN
F 2 "Koha-Suomi:1N4154TAP" H 17250 5600 50  0001 C CNN
F 3 "~" H 17250 5600 50  0001 C CNN
F 4 "175-3316" H 17250 5600 50  0001 C CNN "Model"
F 5 "fi.rsdelivers.com" H 17250 5600 50  0001 C CNN "Supplier"
F 6 "RS PRO, 18W Plug Adapter 12V dc, 1.5A, Level VI Efficiency, 1 Output Power Adapter" H 17250 5600 50  0001 C CNN "Title"
F 7 "RS PRO" H 17250 5600 50  0001 C CNN "Manufacturer"
F 8 "9.10" H 17250 5600 50  0001 C CNN "ALV0%€"
	1    17250 5600
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x02 T2
U 1 1 5D4DF08C
P 15400 8750
F 0 "T2" H 15500 8700 50  0000 C CNN
F 1 "Screw_Terminal_01x02" H 15550 8850 50  0000 C CNN
F 2 "Koha-Suomi:Screw_Terminal_01x02 (Molex)" H 15400 8750 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0398800302_TERMINAL_BLOCKS-167600.pdf" H 15400 8750 50  0001 C CNN
F 4 "39880-0302" H 15400 8750 50  0001 C CNN "Model"
F 5 "Fixed Terminal Blocks 2 CKT TERM. BLOCK 5.08mm" H 15400 8750 50  0001 C CNN "Title"
F 6 "Molex" H 15400 8750 50  0001 C CNN "Manufacturer"
F 7 "0.648" H 15400 8750 50  0001 C CNN "ALV0%€"
	1    15400 8750
	1    0    0    -1  
$EndComp
Wire Wire Line
	15100 9400 15200 9400
Wire Wire Line
	15100 8400 14900 8400
Wire Wire Line
	14100 9150 14100 9400
Text Label 11350 1700 0    39   ~ 0
PiHat_LED_G
Text Label 11350 1500 0    39   ~ 0
PiHat_LED_B
Text Label 11350 1100 0    39   ~ 0
PiHat_LED_R
Text Label 11450 2500 0    61   ~ 0
PiHat_RES
Text Label 11450 2400 0    61   ~ 0
PiHat_MISO/SDO/D2
Text Label 11450 2600 0    61   ~ 0
PiHat_MOSI/SDI/D1
Text Label 11450 2300 0    61   ~ 0
PiHat_CLK/SCLK/D0
Text Label 11350 3200 0    39   ~ 0
PiHat_PIEZO
Text Label 13050 3150 2    39   ~ 0
PiHat_HEAT_ON
Text Label 13050 3050 2    39   ~ 0
PiHat_HEAT_OFF
NoConn ~ 15100 8950
NoConn ~ 14200 8750
Text Label 13950 9150 2    61   ~ 0
PiHat_RelayGND
Text Label 15200 9400 0    61   ~ 0
PiHat_doorON
Connection ~ 15100 9400
Text Label 15200 8400 0    61   ~ 0
PiHat_doorOFF
Wire Wire Line
	15100 8400 15100 8650
Connection ~ 14100 8650
Wire Wire Line
	14100 8650 14200 8650
Wire Wire Line
	14600 8400 14100 8400
Wire Wire Line
	14100 9400 14600 9400
Connection ~ 14100 9150
Wire Wire Line
	14100 9150 14200 9150
Wire Wire Line
	14100 8400 14100 8650
Wire Wire Line
	15100 9400 15100 9150
Wire Wire Line
	14900 9400 15100 9400
Wire Notes Line
	16300 6000 16300 5100
Wire Notes Line
	16300 5100 17550 5100
Wire Notes Line
	17550 5200 16300 5200
NoConn ~ 14200 8850
NoConn ~ 14200 8950
Text Label 13050 1750 2    39   ~ 0
PiHat_RelayGND
Text Label 14900 1850 0    39   ~ 0
PiHat_doorON
Text Notes 13850 3200 0    39   ~ 0
PIEZO must be\nin GPIO 18 due\nto hardware PWM
$Comp
L authenticator-rescue:EC2-3TNU EC2
U 1 1 5C0CC6F5
P 14400 9450
F 0 "EC2" V 15300 9350 60  0000 C CNN
F 1 "EC2-3TNU" V 14800 9200 60  0000 C CNN
F 2 "Koha-Suomi:EC2-3TNU" H 14400 9450 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/212/KEM_R7002_EC2_EE2-1104574.pdf" H 14400 9450 60  0001 C CNN
F 4 "EC2-3TNU" H 14400 9450 50  0001 C CNN "Model"
F 5 "Low Signal Relays - PCB 3V 2A Dbl Latching LL=3.2mm" H 14400 9450 50  0001 C CNN "Title"
F 6 "KEMET" V 14400 9450 50  0001 C CNN "Manufacturer"
F 7 "2.42" V 14400 9450 50  0001 C CNN "ALV0%€"
	1    14400 9450
	0    -1   -1   0   
$EndComp
$Comp
L authenticator-rescue:D D2
U 1 1 5C0CD021
P 14750 9400
F 0 "D2" H 14750 9500 50  0000 C CNN
F 1 "D" H 14750 9300 50  0000 C CNN
F 2 "Koha-Suomi:1N4154TAP" H 14750 9400 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/427/1n4154-241332.pdf" H 14750 9400 50  0001 C CNN
F 4 "1N4154TAP" H 14750 9400 50  0001 C CNN "Model"
F 5 "Diodes - General Purpose, Power, Switching Vr/35v Io/150mA" H 14750 9400 50  0001 C CNN "Title"
F 6 "Vishay Semiconductors" H 14750 9400 50  0001 C CNN "Manufacturer"
F 7 "0.135" H 14750 9400 50  0001 C CNN "ALV0%€"
	1    14750 9400
	-1   0    0    -1  
$EndComp
$Comp
L authenticator-rescue:D D1
U 1 1 5C0CCD9B
P 14750 8400
F 0 "D1" H 14750 8500 50  0000 C CNN
F 1 "D" H 14750 8300 50  0000 C CNN
F 2 "Koha-Suomi:1N4154TAP" H 14750 8400 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/427/1n4154-241332.pdf" H 14750 8400 50  0001 C CNN
F 4 "1N4154TAP" H 14750 8400 50  0001 C CNN "Model"
F 5 "Diodes - General Purpose, Power, Switching Vr/35v Io/150mA" H 14750 8400 50  0001 C CNN "Title"
F 6 "Vishay Semiconductors" H 14750 8400 50  0001 C CNN "Manufacturer"
F 7 "0.135" H 14750 8400 50  0001 C CNN "ALV0%€"
	1    14750 8400
	-1   0    0    -1  
$EndComp
Text Notes 16350 5200 0    60   ~ 0
Heater PSU
$Comp
L authenticator-rescue:RJ45_2xPort-Koha-Suomi RJ4
U 1 1 60C50991
P 10200 3550
F 0 "RJ4" H 11050 3400 50  0000 R CNN
F 1 "RJ45_2xPort-Koha-Suomi" V 11000 4650 50  0000 R CNN
F 2 "Koha-Suomi:RJ45 dual port - WE-15016137621" H 10200 3550 50  0001 C CNN
F 3 "https://katalog.we-online.com/em/datasheet/615016137621.pdf" H 10200 3550 50  0001 C CNN
F 4 "3.51" H 10200 3550 50  0001 C CNN "ALV0%€"
F 5 "Wurth Elektronik" H 10200 3550 50  0001 C CNN "Manufacturer"
F 6 "615016137621" H 10200 3550 50  0001 C CNN "Model"
F 7 "Modular Connectors / Ethernet Connectors WR-MJ Feml Shielded 8P8C Hztl Dual Port" H 10200 3550 50  0001 C CNN "Title"
	1    10200 3550
	1    0    0    1   
$EndComp
$Comp
L authenticator-rescue:RPi_GPIO-Koha-Suomi RPi1
U 1 1 57BB6E59
P 13250 3650
F 0 "RPi1" H 13950 2100 60  0000 C CNN
F 1 "RPi_GPIO" H 13950 2200 60  0000 C CNN
F 2 "Koha-Suomi:PI_GPIO_Header_F_2x20" H 13250 3650 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/527/esw_th-1369991.pdf" H 13250 3650 60  0001 C CNN
F 4 "ESW-120-24-L-D" H 13250 3650 50  0001 C CNN "Model"
F 5 "Samtec, ESQ 2.54mm Pitch 40 Way 2 Row Vertical PCB Socket, Through Hole, Solder Termination" H 13250 3650 50  0001 C CNN "Title"
F 6 "Samtec" H 13250 3650 50  0001 C CNN "Manufacturer"
F 7 "Mouser" H 13250 3650 50  0001 C CNN "Supplier"
F 8 "13.59mm" H 13250 3650 50  0001 C CNN "BodyHeight"
F 9 "6.00" H 13250 3650 50  0001 C CNN "ALV0%€"
	1    13250 3650
	1    0    0    1   
$EndComp
Wire Wire Line
	11350 3200 15100 3200
Wire Wire Line
	15100 3200 15100 3150
Wire Wire Line
	15100 3150 14900 3150
Text Label 14900 1750 0    39   ~ 0
PiHat_doorOFF
Wire Wire Line
	13050 2450 12550 2450
Wire Wire Line
	12550 2450 12550 2100
Wire Wire Line
	12550 2100 11350 2100
Wire Wire Line
	14900 2550 14900 2500
Wire Wire Line
	14900 3250 14950 3250
Wire Wire Line
	12100 3350 13050 3350
Text Label 13050 2950 2    39   ~ 0
PiHat_KeyPadOn
Text Label 13050 1850 2    39   ~ 0
PiHat_KeyPadOff
Text Label 11450 2200 0    61   ~ 0
PiHat_CE0/CS
Wire Wire Line
	14900 2500 12450 2500
Wire Wire Line
	12450 2500 12450 2200
Wire Wire Line
	12450 2200 11350 2200
Wire Wire Line
	12350 2550 12350 2300
Wire Wire Line
	12350 2300 11350 2300
Wire Wire Line
	12350 2550 13050 2550
Wire Wire Line
	12250 2400 11350 2400
Wire Wire Line
	12150 2500 11350 2500
Wire Wire Line
	12050 2750 12050 2600
Wire Wire Line
	12050 2600 11350 2600
Wire Wire Line
	12050 2750 13050 2750
Wire Wire Line
	7100 7300 6850 7300
Wire Wire Line
	6850 7300 6850 6900
Wire Wire Line
	6850 6900 5500 6900
Wire Wire Line
	7100 7400 6550 7400
Wire Wire Line
	7100 7500 6750 7500
Wire Wire Line
	7100 7600 6650 7600
Wire Wire Line
	6650 7600 6650 7000
Wire Wire Line
	6650 7000 5500 7000
Wire Wire Line
	6650 8400 7100 8400
Wire Wire Line
	7100 8300 6550 8300
Wire Wire Line
	6550 8300 6550 9150
Wire Wire Line
	14950 3300 14950 3250
Wire Wire Line
	14950 3400 14950 3350
Wire Wire Line
	14950 3350 14900 3350
Wire Wire Line
	15200 8850 15100 8750
Wire Wire Line
	15200 8750 15100 8850
Wire Wire Line
	14900 2650 14900 2700
Wire Wire Line
	14900 2700 12150 2700
Wire Wire Line
	12150 2500 12150 2700
Wire Wire Line
	13050 2650 12250 2650
Wire Wire Line
	12250 2400 12250 2650
Wire Wire Line
	7100 7200 5500 7200
Wire Wire Line
	6550 7100 6550 7400
Wire Wire Line
	5500 7100 6550 7100
Wire Wire Line
	6750 7500 6750 7300
Wire Wire Line
	6750 7300 5500 7300
Text Label 6450 7300 2    39   ~ 0
OLED_RES
Text Label 6450 7200 2    39   ~ 0
OLED_CS
Text Label 6450 7100 2    39   ~ 0
OLED_D2
$Comp
L authenticator-rescue:ZM10E10B01 ZM1
U 1 1 5F9E530C
P 3050 4200
F 0 "ZM1" V 2800 4300 50  0000 C CNN
F 1 "ZM10E10B01" V 3300 4200 50  0000 C CNN
F 2 "Koha-Suomi:Bad_board_tag" H 3050 4200 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/187/honeywell-sensing-micro-switch-ZM-ZM1-basic-produc-1266371.pdf" H 3050 4200 50  0001 C CNN
F 4 "Honeywell" V 3050 4200 50  0001 C CNN "Manufacturer"
F 5 "ZM10E10C01" V 3050 4200 50  0001 C CNN "Model"
F 6 "2.81" V 3050 4200 50  0001 C CNN "ALV0%€"
F 7 "Basic / Snap Action Switches BASIC SW ES" V 3050 4200 50  0001 C CNN "Title"
	1    3050 4200
	0    -1   -1   0   
$EndComp
Text Notes 2800 3900 0    50   ~ 0
Enclosure door sensor
Wire Notes Line
	2800 4500 3700 4500
Wire Notes Line
	3700 4500 3700 3800
Wire Notes Line
	3700 3800 2800 3800
Wire Notes Line
	2800 3800 2800 4500
Wire Notes Line
	2800 3900 3700 3900
$Comp
L authenticator-rescue:HEADER_S_1X02 H7
U 1 1 5FA26ECB
P 4600 3800
F 0 "H7" H 4517 3925 50  0000 C CNN
F 1 "HEADER_S_1X02" H 4517 4016 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x02_Pitch2.54mm" H 4517 4017 50  0001 C CNN
F 3 "" H 4600 3800 50  0001 C CNN
F 4 "Molex" H 4600 3800 50  0001 C CNN "Manufacturer"
F 5 "22-10-2021 " H 4600 3800 50  0001 C CNN "Model"
F 6 "0.339" H 4600 3800 50  0001 C CNN "ALV0%€"
	1    4600 3800
	-1   0    0    1   
$EndComp
Text Label 4800 4150 0    50   ~ 0
ENCL_DOOR
Text Label 4800 4250 0    50   ~ 0
3V3
NoConn ~ 3150 4050
Text Notes 3150 4350 0    50   ~ 0
ENCL_DOOR\n\n3V3
Text Notes 3700 4300 0    50   ~ 0
Two\nMale-Female ==>\njumpers
Text Label 7100 7000 2    39   ~ 0
ENCL_DOOR
Text Label 11350 2000 0    39   ~ 0
PiHat_ENCL_DOOR
Wire Wire Line
	1600 6800 1600 7200
Wire Wire Line
	1400 7100 2000 7100
Wire Wire Line
	1400 7000 2000 7000
Wire Wire Line
	1400 6900 2000 6900
Wire Wire Line
	1600 6300 1600 6500
Wire Wire Line
	1400 6400 1700 6400
Wire Wire Line
	1600 7600 1600 7900
Wire Wire Line
	1400 7800 1800 7800
Wire Wire Line
	1400 7700 1700 7700
Wire Notes Line
	2600 7450 2600 6400
Wire Notes Line
	1900 7450 2600 7450
Wire Notes Line
	1900 7900 1900 7450
Wire Notes Line
	1700 7900 1900 7900
Wire Notes Line
	1700 8350 1700 7900
Wire Notes Line
	550  8350 1700 8350
Wire Notes Line
	1700 6050 1700 6300
Wire Notes Line
	1800 6400 2600 6400
Wire Notes Line
	1800 6300 1800 6400
Wire Notes Line
	1700 6300 1800 6300
Wire Wire Line
	1600 7500 1600 7600
Wire Wire Line
	1600 7400 1600 7500
Wire Wire Line
	1600 8100 1600 8200
Wire Wire Line
	1600 8000 1600 8100
Wire Wire Line
	1600 7900 1600 8000
Wire Wire Line
	1600 7300 1600 7400
Wire Wire Line
	1600 7200 1600 7300
Wire Wire Line
	1600 6700 1600 6800
Wire Wire Line
	1600 6600 1600 6700
Wire Wire Line
	1600 6500 1600 6600
Wire Wire Line
	1600 6800 2000 6800
Text Label 1800 7300 0    68   ~ 0
RES
Text Label 1800 7200 0    68   ~ 0
CS
Text Label 1800 7100 0    68   ~ 0
D2
Text Label 1800 7000 0    68   ~ 0
D1
Text Label 1800 6900 0    68   ~ 0
D0
Text Label 1800 6800 0    68   ~ 0
GND
Text Label 1800 6700 0    68   ~ 0
3V3
Connection ~ 1600 7600
Wire Wire Line
	1400 7600 1600 7600
Connection ~ 1600 7500
Wire Wire Line
	1400 7500 1600 7500
Connection ~ 1600 7400
Wire Wire Line
	1400 7400 1600 7400
Connection ~ 1600 8100
Wire Wire Line
	1400 8100 1600 8100
Connection ~ 1600 8000
Wire Wire Line
	1400 8000 1600 8000
Connection ~ 1600 7900
Wire Wire Line
	1400 7900 1600 7900
Wire Wire Line
	1800 7300 2000 7300
Wire Wire Line
	1800 7800 1800 7300
Wire Wire Line
	1700 7700 1700 7200
Connection ~ 1600 7300
Wire Wire Line
	1400 7300 1600 7300
Connection ~ 1600 7200
Wire Wire Line
	1400 7200 1600 7200
Connection ~ 1600 6700
Wire Wire Line
	1400 6700 1600 6700
Connection ~ 1600 6600
Wire Wire Line
	1400 6600 1600 6600
Connection ~ 1600 6500
Wire Wire Line
	1400 6500 1600 6500
Wire Wire Line
	1700 6700 2000 6700
Wire Wire Line
	1700 6400 1700 6700
Connection ~ 1600 6800
Wire Wire Line
	1600 6300 1400 6300
Wire Wire Line
	1600 8200 1400 8200
Wire Wire Line
	1400 6800 1600 6800
Text Notes 2150 7350 0    68   ~ 0
To PCB\n    3V3\n    GND\n    D0\n    D1\n    D2\n    CS\n    RES
$Comp
L authenticator-rescue:HEADER_S_1X07 H?
U 1 1 5EC143AC
P 2200 6850
AR Path="/598B2508/5EC143AC" Ref="H?"  Part="1" 
AR Path="/5EC143AC" Ref="H4"  Part="1" 
F 0 "H4" H 2200 7400 50  0000 C CNN
F 1 "HEADER_S_1X07" V 2300 7000 50  0000 C CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x07_Pitch2.54mm" H 2200 6850 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/022102074_sd-589973.pdf" H 2200 6850 50  0001 C CNN
F 4 "22-10-2074" H 2200 6850 50  0001 C CNN "Model"
F 5 "www.mouser.fi" H 2200 6850 50  0001 C CNN "Supplier"
F 6 "Headers & Wire Housings KK 100 Hdr Flat VERT 20 Au 7Ckt" H 2200 6850 50  0001 C CNN "Title"
F 7 "Molex" H 2200 6850 50  0001 C CNN "Manufacturer"
F 8 "1.52" H 2200 6850 50  0001 C CNN "ALV0%€"
	1    2200 6850
	1    0    0    1   
$EndComp
Wire Wire Line
	1700 7200 2000 7200
$Comp
L authenticator-rescue:HEADER_S_1X20 H11
U 1 1 5FAC66FB
P 1600 7250
F 0 "H11" H 1650 8150 50  0000 L CNN
F 1 "HEADER_S_1X20" H 1300 8300 50  0000 L CNN
F 2 "" H 1600 7750 50  0000 C CNN
F 3 "" H 1600 7750 50  0000 C CNN
F 4 "HEADER M 1x20" H 1600 7250 50  0001 C CNN "Model"
	1    1600 7250
	1    0    0    -1  
$EndComp
Connection ~ 1400 6300
Connection ~ 1400 7200
Connection ~ 1400 7300
Connection ~ 1400 7400
Connection ~ 1400 7500
Connection ~ 1400 7600
Connection ~ 1400 7700
Connection ~ 1400 7800
Connection ~ 1400 7900
Connection ~ 1400 8000
Connection ~ 1400 8100
Connection ~ 1400 6400
Connection ~ 1400 8200
Connection ~ 1400 6500
Connection ~ 1400 6600
Connection ~ 1400 6700
Connection ~ 1400 6800
Connection ~ 1400 6900
Connection ~ 1400 7000
Connection ~ 1400 7100
$Comp
L authenticator-rescue:Cabinet_cable_2-pin-Koha-Suomi CC1
U 1 1 5FAEA689
P 9300 4300
F 0 "CC1" H 9300 4615 50  0000 C CNN
F 1 "Cabinet_cable_2-pin-Koha-Suomi" H 9300 4524 50  0000 C CNN
F 2 "" H 9300 4300 50  0001 C CNN
F 3 "" H 9300 4300 50  0001 C CNN
F 4 "5m" H 9300 4300 50  0001 C CNN "Length"
	1    9300 4300
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:Standoff-Koha-Suomi STO2
U 1 1 5FAFA2D4
P 16300 2450
F 0 "STO2" V 16300 2200 50  0000 L CNN
F 1 "Standoff x2" H 16200 2100 50  0000 L CNN
F 2 "Koha-Suomi:Bad_board_tag" H 16300 2450 50  0001 C CNN
F 3 "" H 16300 2450 50  0001 C CNN
F 4 "2337" V 16300 2450 50  0001 C CNN "Model"
F 5 "Adafruit Brass M2.5 Standoffs 16mm tall - Black Plated - Pack of 2" V 16300 2450 50  0001 C CNN "Title"
F 6 "Adafruit" V 16300 2450 50  0001 C CNN "Manufacturer"
F 7 "thepihut.com" V 16300 2450 50  0001 C CNN "Supplier"
F 8 "1.14" V 16300 2450 50  0001 C CNN "ALV0%€"
	1    16300 2450
	1    0    0    -1  
$EndComp
NoConn ~ 15100 7500
NoConn ~ 14200 7300
NoConn ~ 14200 7400
NoConn ~ 14200 7500
$Comp
L authenticator-rescue:D D5
U 1 1 5FB008F5
P 14750 6950
F 0 "D5" H 14750 7050 50  0000 C CNN
F 1 "D" H 14750 6850 50  0000 C CNN
F 2 "Koha-Suomi:1N4154TAP" H 14750 6950 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/427/1n4154-241332.pdf" H 14750 6950 50  0001 C CNN
F 4 "1N4154TAP" H 14750 6950 50  0001 C CNN "Model"
F 5 "Diodes - General Purpose, Power, Switching Vr/35v Io/150mA" H 14750 6950 50  0001 C CNN "Title"
F 6 "Vishay Semiconductors" H 14750 6950 50  0001 C CNN "Manufacturer"
F 7 "0.135" H 14750 6950 50  0001 C CNN "ALV0%€"
	1    14750 6950
	-1   0    0    -1  
$EndComp
$Comp
L authenticator-rescue:D D6
U 1 1 5FB00903
P 14750 7950
F 0 "D6" H 14750 8050 50  0000 C CNN
F 1 "D" H 14750 7850 50  0000 C CNN
F 2 "Koha-Suomi:1N4154TAP" H 14750 7950 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/427/1n4154-241332.pdf" H 14750 7950 50  0001 C CNN
F 4 "1N4154TAP" H 14750 7950 50  0001 C CNN "Model"
F 5 "Diodes - General Purpose, Power, Switching Vr/35v Io/150mA" H 14750 7950 50  0001 C CNN "Title"
F 6 "Vishay Semiconductors" H 14750 7950 50  0001 C CNN "Manufacturer"
F 7 "0.135" H 14750 7950 50  0001 C CNN "ALV0%€"
	1    14750 7950
	-1   0    0    -1  
$EndComp
$Comp
L authenticator-rescue:EC2-3TNU EC3
U 1 1 5FB00911
P 14400 8000
F 0 "EC3" V 15300 7900 60  0000 C CNN
F 1 "EC2-3TNU" V 14800 7750 60  0000 C CNN
F 2 "Koha-Suomi:EC2-3TNU" H 14400 8000 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/212/KEM_R7002_EC2_EE2-1104574.pdf" H 14400 8000 60  0001 C CNN
F 4 "EC2-3TNU" H 14400 8000 50  0001 C CNN "Model"
F 5 "Low Signal Relays - PCB 3V 2A Dbl Latching LL=3.2mm" H 14400 8000 50  0001 C CNN "Title"
F 6 "KEMET" V 14400 8000 50  0001 C CNN "Manufacturer"
F 7 "2.42" V 14400 8000 50  0001 C CNN "ALV0%€"
	1    14400 8000
	0    -1   -1   0   
$EndComp
Text Notes 14550 5200 0    60   ~ 0
Enclosure heater controller
Wire Notes Line
	14450 6700 15850 6700
Wire Notes Line
	14500 8200 15850 8200
Text Notes 14750 8200 0    60   ~ 0
Door/Lock signal relay
Wire Wire Line
	14200 7200 14100 7200
Wire Wire Line
	14100 7200 14100 7700
Wire Wire Line
	14100 7700 14200 7700
Wire Wire Line
	14100 7200 14100 6950
Wire Wire Line
	14100 6950 14600 6950
Connection ~ 14100 7200
Wire Wire Line
	14100 7700 14100 7950
Wire Wire Line
	14100 7950 14600 7950
Connection ~ 14100 7700
Wire Wire Line
	14100 7700 13950 7700
Text Label 13950 7700 2    61   ~ 0
PiHat_RelayGND
Wire Wire Line
	14100 8650 14100 9150
Wire Wire Line
	14100 9150 13950 9150
NoConn ~ 15100 6000
NoConn ~ 14200 5800
NoConn ~ 14200 5900
NoConn ~ 14200 6000
$Comp
L authenticator-rescue:D D3
U 1 1 5FD38F19
P 14750 5450
F 0 "D3" H 14750 5550 50  0000 C CNN
F 1 "D" H 14750 5350 50  0000 C CNN
F 2 "Koha-Suomi:1N4154TAP" H 14750 5450 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/427/1n4154-241332.pdf" H 14750 5450 50  0001 C CNN
F 4 "1N4154TAP" H 14750 5450 50  0001 C CNN "Model"
F 5 "Diodes - General Purpose, Power, Switching Vr/35v Io/150mA" H 14750 5450 50  0001 C CNN "Title"
F 6 "Vishay Semiconductors" H 14750 5450 50  0001 C CNN "Manufacturer"
F 7 "0.135" H 14750 5450 50  0001 C CNN "ALV0%€"
	1    14750 5450
	-1   0    0    -1  
$EndComp
$Comp
L authenticator-rescue:D D4
U 1 1 5FD38F27
P 14750 6450
F 0 "D4" H 14750 6550 50  0000 C CNN
F 1 "D" H 14750 6350 50  0000 C CNN
F 2 "Koha-Suomi:1N4154TAP" H 14750 6450 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/427/1n4154-241332.pdf" H 14750 6450 50  0001 C CNN
F 4 "1N4154TAP" H 14750 6450 50  0001 C CNN "Model"
F 5 "Diodes - General Purpose, Power, Switching Vr/35v Io/150mA" H 14750 6450 50  0001 C CNN "Title"
F 6 "Vishay Semiconductors" H 14750 6450 50  0001 C CNN "Manufacturer"
F 7 "0.135" H 14750 6450 50  0001 C CNN "ALV0%€"
	1    14750 6450
	-1   0    0    -1  
$EndComp
Text Label 15200 7950 0    50   ~ 0
PiHat_KeyPadOn
$Comp
L authenticator-rescue:EC2-3TNU EC1
U 1 1 5FD38F3A
P 14400 6500
F 0 "EC1" V 15300 6400 60  0000 C CNN
F 1 "EC2-3TNU" V 14800 6250 60  0000 C CNN
F 2 "Koha-Suomi:EC2-3TNU" H 14400 6500 60  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/212/KEM_R7002_EC2_EE2-1104574.pdf" H 14400 6500 60  0001 C CNN
F 4 "EC2-3TNU" H 14400 6500 50  0001 C CNN "Model"
F 5 "Low Signal Relays - PCB 3V 2A Dbl Latching LL=3.2mm" H 14400 6500 50  0001 C CNN "Title"
F 6 "KEMET" V 14400 6500 50  0001 C CNN "Manufacturer"
F 7 "2.42" V 14400 6500 50  0001 C CNN "ALV0%€"
	1    14400 6500
	0    -1   -1   0   
$EndComp
Text Label 15200 6950 0    50   ~ 0
PiHat_KeyPadOff
Wire Wire Line
	14200 5700 14100 5700
Wire Wire Line
	14100 5700 14100 5450
Wire Wire Line
	14100 5450 14600 5450
Wire Wire Line
	14200 6200 14100 6200
Wire Wire Line
	14100 6200 14100 6450
Wire Wire Line
	14100 6450 14600 6450
Wire Wire Line
	14100 6200 14100 5700
Connection ~ 14100 6200
Connection ~ 14100 5700
Wire Wire Line
	14100 6200 13950 6200
Text Label 13950 6200 2    61   ~ 0
PiHat_RelayGND
Text Notes 14600 6700 0    60   ~ 0
KeyPad controller
Wire Notes Line
	14500 5200 15850 5200
Connection ~ 15100 8400
Wire Wire Line
	15100 8400 15200 8400
Wire Wire Line
	15100 7700 15100 7950
Wire Wire Line
	15100 7950 14900 7950
Wire Wire Line
	15100 7200 15100 6950
Wire Wire Line
	15100 6950 14900 6950
Wire Wire Line
	14900 5450 15100 5450
Wire Wire Line
	15100 6200 15100 6450
Wire Wire Line
	15100 6450 14900 6450
Wire Wire Line
	15100 5700 15100 5450
Wire Wire Line
	15100 5450 15200 5450
Connection ~ 15100 5450
Wire Wire Line
	15200 6450 15100 6450
Connection ~ 15100 6450
Wire Wire Line
	15100 6950 15200 6950
Connection ~ 15100 6950
Wire Wire Line
	15100 7950 15200 7950
Connection ~ 15100 7950
Text Label 15200 5450 0    50   ~ 0
PiHat_HEAT_OFF
Text Label 15200 6450 0    50   ~ 0
PiHat_HEAT_ON
Wire Wire Line
	16000 5800 17250 5300
Wire Wire Line
	16000 5800 15900 5800
NoConn ~ 15900 5900
NoConn ~ 15900 5800
Text Label 15600 6000 2    50   ~ 0
PiHat_HEAT+_OUT
Wire Wire Line
	15100 5800 15350 5900
Text Label 15100 7300 0    50   ~ 0
PiHAT_KeyPad_5V
Text Label 13050 2250 2    39   ~ 0
PiHat_LED_G
Text Label 13050 2150 2    39   ~ 0
PiHat_LED_B
Text Label 13050 2050 2    39   ~ 0
PiHat_LED_R
Wire Wire Line
	15900 5900 17250 5900
Text Notes 15850 6150 0    68   ~ 0
- To Heater + (pin 2)\n- To Heater - (pin 1)
Text Label 6850 4300 2    39   ~ 0
Heater-
Text Label 6850 4100 2    39   ~ 0
Heater+
Text Label 6850 4200 2    39   ~ 0
HeaterPSU+
Text Notes 7250 4850 0    68   ~ 0
- To Heater + (pin 2)\n- To Heater - (pin 1)\n- To Heater PSU +\n- To Heater PSU -\nPlug two wires to\none turret slot if\nneed be
Text Label 6850 4400 2    39   ~ 0
HeaterPSU-
Wire Wire Line
	7900 3300 7900 4200
Wire Wire Line
	7900 4200 7250 4200
Wire Wire Line
	7900 3000 8050 3000
Wire Wire Line
	8050 3000 8050 4300
Wire Wire Line
	8050 4300 7250 4300
NoConn ~ 7250 4200
NoConn ~ 7250 4300
Text Label 15100 7400 0    50   ~ 0
PiHAT_5V
Text Label 14900 3650 0    39   ~ 0
PiHAT_5V
$Comp
L Connector:Screw_Terminal_01x04 J3
U 1 1 6068FBAA
P 15800 5900
F 0 "J3" H 15750 6100 50  0000 L CNN
F 1 "Screw_Terminal_01x04" H 15400 6200 50  0000 L CNN
F 2 "Koha-Suomi:Terminal 1x4 (Molex-398800304)" H 15800 5900 50  0001 C CNN
F 3 "https://www.molex.com/pdm_docs/sd/398800304_sd.pdf" H 15800 5900 50  0001 C CNN
F 4 "1.16" H 15800 5900 50  0001 C CNN "ALV0%€"
F 5 "Molex" H 15800 5900 50  0001 C CNN "Manufacturer"
F 6 "39880-0304" H 15800 5900 50  0001 C CNN "Model"
F 7 "Fixed Terminal Blocks LOW PROFILE 5.08 4 A W PROFILE 5.08 4 ASY" H 15800 5900 50  0001 C CNN "Title"
F 8 "" H 15800 5900 50  0001 C CNN "Field8"
	1    15800 5900
	1    0    0    -1  
$EndComp
Wire Wire Line
	15600 6000 15350 6000
Wire Wire Line
	15350 6000 15350 5900
Wire Wire Line
	15600 5900 15500 5900
Wire Wire Line
	15500 5900 15500 6100
Wire Wire Line
	15500 6100 15600 6100
Text Label 15600 5800 2    50   ~ 0
PiHat_HEAT+_IN
Text Label 14900 2450 0    39   ~ 0
PiHat_ENCL_DOOR
Text Label 11350 1300 0    39   ~ 0
PiHat_GND2
Text Label 14900 2050 0    39   ~ 0
PiHat_GND2
Wire Wire Line
	11350 3400 14950 3400
Wire Wire Line
	11350 3300 14950 3300
Wire Wire Line
	12100 3500 12100 3350
Wire Wire Line
	11350 3500 12100 3500
Text Label 11350 3500 0    39   ~ 0
PiHat_DS18B20
Wire Notes Line
	4450 6000 4450 10550
Wire Wire Line
	6350 8100 7100 8100
Wire Wire Line
	6350 8950 6350 8100
Wire Wire Line
	5850 8950 6350 8950
Wire Wire Line
	11350 4700 11550 4700
Wire Wire Line
	11550 4700 11550 4600
Wire Wire Line
	11550 4500 11350 4500
Wire Wire Line
	11350 4600 11550 4600
Connection ~ 11550 4600
Wire Wire Line
	11550 4600 11550 4500
Wire Wire Line
	11350 4200 11550 4200
Wire Wire Line
	11550 4200 11550 4100
Wire Wire Line
	11550 4000 11350 4000
Wire Wire Line
	11350 4100 11550 4100
Connection ~ 11550 4100
Wire Wire Line
	11550 4100 11550 4000
Text Label 11550 4600 0    50   ~ 0
PiHat_HEAT+_OUT
Text Label 11550 4100 0    50   ~ 0
PiHat_HEAT-
Text Label 11450 2100 0    61   ~ 0
PiHat_GND1
Text Label 11350 2700 0    39   ~ 0
PiHat_3V3
Wire Wire Line
	11350 4300 11550 4300
Wire Wire Line
	11550 4300 11550 4200
Connection ~ 11550 4200
Wire Wire Line
	11350 4400 11550 4400
Wire Wire Line
	11550 4400 11550 4500
Connection ~ 11550 4500
Text Notes 10550 1800 2    63   ~ 0
To utility board\nLED R\nBarcode_5V\nGND\nBarcode_D-\nLED B\nBarcode_D+\nLED G\nBarcode_GND
Text Notes 7950 6800 0    63   ~ 0
\nHeater-\nHeater-\nHeater-\nHeater-\nHeater+\nHeater+\nHeater+\nHeater+
Text Notes 7950 8800 0    63   ~ 0
\nKeyPadPSU+\nPIEZO\nKeyPadRX\nKeyPadTX\nDS18B20\n-\n-\n-
Text Notes 7950 7700 0    62   ~ 0
\nEncl Door\nGND\nCS (CS)\nD0 (SCLK)\nD2 (SDOUT)\nRES (RES)\nD1 (SDIN)\n3V3
Text Label 7100 9200 2    39   ~ 0
GND
Text Label 7100 9000 2    39   ~ 0
LED_R
Text Label 7100 9400 2    39   ~ 0
LED_B
Text Label 7100 9600 2    39   ~ 0
LED_G
$Comp
L authenticator-rescue:RJ45_2xPort-Koha-Suomi RJ2
U 1 1 6093F0A7
P 8250 8550
F 0 "RJ2" H 9050 8300 50  0000 R CNN
F 1 "RJ45_2xPort-Koha-Suomi" V 9000 9500 50  0000 R CNN
F 2 "Koha-Suomi:RJ45 dual port - WE-15016137621" H 8250 8550 50  0001 C CNN
F 3 "https://katalog.we-online.com/em/datasheet/615016137621.pdf" H 8250 8550 50  0001 C CNN
F 4 "3.51" H 8250 8550 50  0001 C CNN "ALV0%€"
F 5 "Wurth Elektronik" H 8250 8550 50  0001 C CNN "Manufacturer"
F 6 "615016137621" H 8250 8550 50  0001 C CNN "Model"
F 7 "Modular Connectors / Ethernet Connectors WR-MJ Feml Shielded 8P8C Hztl Dual Port" H 8250 8550 50  0001 C CNN "Title"
	1    8250 8550
	-1   0    0    1   
$EndComp
Text Label 6200 6150 0    39   ~ 0
PIEZO
Text Label 7100 8100 2    39   ~ 0
KeyPadPSU+
Text Label 7100 8500 2    39   ~ 0
DS18B20
Text Label 7000 6100 2    39   ~ 0
Heater-
Text Label 7000 6500 2    39   ~ 0
Heater+
Wire Wire Line
	7100 6100 7000 6100
Wire Wire Line
	7100 6400 7000 6400
Wire Wire Line
	7000 6400 7000 6300
Wire Wire Line
	7100 6300 7000 6300
Connection ~ 7000 6300
Wire Wire Line
	7000 6300 7000 6200
Wire Wire Line
	7100 6200 7000 6200
Connection ~ 7000 6200
Wire Wire Line
	7000 6200 7000 6100
Wire Wire Line
	7100 6800 7000 6800
Wire Wire Line
	7000 6800 7000 6700
Wire Wire Line
	7100 6500 7000 6500
Wire Wire Line
	7100 6600 7000 6600
Connection ~ 7000 6600
Wire Wire Line
	7000 6600 7000 6500
Wire Wire Line
	7100 6700 7000 6700
Connection ~ 7000 6700
Wire Wire Line
	7000 6700 7000 6600
$Comp
L Connector:Screw_Terminal_01x02 T1
U 1 1 60FFD5E9
P 7150 4200
F 0 "T1" H 7150 4300 50  0000 C CNN
F 1 "Screw_Terminal_01x02" H 7150 4450 50  0000 C CNN
F 2 "Koha-Suomi:Screw_Terminal_01x02 (Molex)" H 7150 4200 50  0001 C CNN
F 3 "https://www.mouser.fi/datasheet/2/276/0398800302_TERMINAL_BLOCKS-167600.pdf" H 7150 4200 50  0001 C CNN
F 4 "39880-0302" H 7150 4200 50  0001 C CNN "Model"
F 5 "Fixed Terminal Blocks 2 CKT TERM. BLOCK 5.08mm" H 7150 4200 50  0001 C CNN "Title"
F 6 "Molex" H 7150 4200 50  0001 C CNN "Manufacturer"
F 7 "0.648" H 7150 4200 50  0001 C CNN "ALV0%€"
	1    7150 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 4300 6950 4300
Wire Wire Line
	6850 4300 6850 4400
Wire Wire Line
	6850 4400 6950 4400
Wire Wire Line
	6950 4400 6950 4300
Connection ~ 6950 4300
Wire Wire Line
	6950 4200 6850 4200
Wire Wire Line
	6850 4100 6850 4200
Wire Wire Line
	6850 4100 6950 4100
Wire Wire Line
	6950 4100 6950 4200
Connection ~ 6950 4200
Text Label 7100 9100 2    50   ~ 0
Barcode_5V
Text Label 7100 9300 2    50   ~ 0
Barcode_D-
Text Label 7100 9500 2    50   ~ 0
Barcode_D+
Text Label 7100 9700 2    50   ~ 0
Barcode_GND
Text Notes 7950 6000 0    50   ~ 0
To Raspberry GPIO
Text Label 13550 1150 2    39   ~ 0
PiHat_Barcode_GND
Text Label 13550 1250 2    39   ~ 0
PiHat_Barcode_D+
Text Label 13550 1350 2    39   ~ 0
PiHat_Barcode_D-
Text Label 13550 1450 2    39   ~ 0
PiHat_Barcode_5V
Text Label 13050 2850 2    39   ~ 0
PiHat_3V3
Text Label 10950 4900 0    50   ~ 0
PiHat_HEAT-
Text Label 10950 2900 0    50   ~ 0
PiHat_HEAT-
Text Label 10950 900  0    50   ~ 0
PiHat_HEAT-
Text Label 15600 6100 2    50   ~ 0
PiHat_HEAT-
Wire Wire Line
	15600 5800 15100 5900
$Comp
L authenticator-rescue:RJ45_2xPort-Koha-Suomi RJ5
U 1 1 612F35CA
P 10350 7200
F 0 "RJ5" H 11200 7050 50  0000 R CNN
F 1 "RJ45_2xPort-Koha-Suomi" V 11150 8300 50  0000 R CNN
F 2 "Koha-Suomi:RJ45 dual port - WE-15016137621" H 10350 7200 50  0001 C CNN
F 3 "https://katalog.we-online.com/em/datasheet/615016137621.pdf" H 10350 7200 50  0001 C CNN
F 4 "3.51" H 10350 7200 50  0001 C CNN "ALV0%€"
F 5 "Wurth Elektronik" H 10350 7200 50  0001 C CNN "Manufacturer"
F 6 "615016137621" H 10350 7200 50  0001 C CNN "Model"
F 7 "Modular Connectors / Ethernet Connectors WR-MJ Feml Shielded 8P8C Hztl Dual Port" H 10350 7200 50  0001 C CNN "Title"
	1    10350 7200
	1    0    0    1   
$EndComp
Text Notes 10850 6500 0    50   ~ 0
Protopiece to 2,54mm\nheaderize a Cat-cable
Wire Notes Line
	10850 6500 11650 6500
Wire Notes Line
	11650 6500 11650 8600
Wire Notes Line
	11650 8600 10850 8600
Wire Notes Line
	10850 8600 10850 6500
$Comp
L authenticator-rescue:HEADER_S_1X08 H12
U 1 1 6147F7AA
P 11700 7100
F 0 "H12" H 11778 7141 50  0000 L CNN
F 1 "HEADER_S_1X08" H 11778 7050 50  0000 L CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x08_Pitch2.54mm" H 11778 7004 50  0001 L CNN
F 3 "" H 11700 7000 50  0000 C CNN
	1    11700 7100
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:HEADER_S_1X08 H13
U 1 1 61480DD2
P 11700 8000
F 0 "H13" H 11778 8041 50  0000 L CNN
F 1 "HEADER_S_1X08" H 11778 7950 50  0000 L CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x08_Pitch2.54mm" H 11778 7904 50  0001 L CNN
F 3 "" H 11700 7900 50  0000 C CNN
	1    11700 8000
	1    0    0    -1  
$EndComp
$Comp
L authenticator-rescue:HEADER_S_1X01 H14
U 1 1 614AA40E
P 11700 7550
F 0 "H14" H 11778 7591 50  0000 L CNN
F 1 "HEADER_S_1X01" H 11778 7500 50  0000 L CNN
F 2 "Koha-Suomi:Pin_Header_Straight_1x01_Pitch2.54mm" H 11778 7454 50  0001 L CNN
F 3 "" H 11700 7550 50  0000 C CNN
	1    11700 7550
	1    0    0    -1  
$EndComp
Text Label 11100 6550 0    39   ~ 0
ExtraCatShield
Text Label 11100 8550 0    39   ~ 0
ExtraCatShield
Text Label 11500 7550 2    39   ~ 0
ExtraCatShield
$EndSCHEMATC
