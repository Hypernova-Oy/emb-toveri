###IN THIS DOCUMENT
We define how to assemble the Toveri.
###OVERVIEW OF THE ASSEMBLY
The assembly is divided into the following steps and documents supporting the steps:

**Table of Contents**

[TOC]

## 1. Ordering all the needed components, devices and tools.
###Bill of materials
Mfr. # | Description | Quantity
--------------|---------------|------------
-PCB- | |
TVX1H4R7MAD | Aluminium Electrolytic Capacitors - Leaded 50volts 4.7uF 5x12 20% | 1
CFR100J4K7 | Carbon Film Resistors - Through Hole 4.7KOhm 1W 500PPM | 1
EC2-3NU | Low Signal Relays - PCB 3V 10uA Relay Signal 2formC | 1
EC2-3TNU | Low Signal Relays - PCB 3V 10uA Relay Signal 2formC | 1
1550KSGASKET | Enclosures, Boxes & Cases IP68 GasketKit/Pack2 For use with 1550K | 1
OF221JE | Carbon Composition Resistors 1/2watt 220ohm 5% Carbon Comp | 3
AT-1220-TWT-5V-R | Speakers & Transducers 5VP-P 45MA 47OHM 85DBA | 1
DS18B20+ | Board Mount Temperature Sensors Prgmble Resolution 1-Wire Parasite Pwr | 1
C3200-6136A | Thermoelectric Modules FLEX HEATERS | 1
SB400 | PCBs & Breadboards 400 TIE POINT SLDR PC BDBOARD | 1
1550KBK | Enclosures, Boxes & Cases Diecast Aluminum Box 5.51x2.9x4.02" Black | 1
R5000F | Diodes - General Purpose, Power, Switching HV Fst Rec Rct 200mA,5000V | 3
WP154A4SUREQBFZGC | Standard LEDs - Through Hole RGB 630/525/465nm 750/420/750mcd 60Deg | 1
NHD-0420CW-AB3 | OLED Displays & Accessories 4x20 Blue Slim Character OLED | 1
SML1083 | 5mm LEDKEHYS/O-RENG./LINSSI, KROMI | 1
GZI0801 | PLASTIC LED HOLDER SML1083&SMX1083 | 1

-DEVICES- | |
 | Raspberry Pi 3+ | 1
GFS4400 | Datalogic Gryphon GFS4400 USB | 1

-CABLING- | |
 | 28AWG 20-30 napainen lattakaapeli | 30m
08-50-0114 | Headers & Wire Housings CRIMP TERM 22-30 TIN | 100
22-01-2107 | Headers & Wire Housings HSG 10P W/LKG RAMP | 2
22-01-3067 | Headers & Wire Housings HSG 6P W/RAMP/RIBS | 2
22-01-3057 | Headers & Wire Housings HSG 5P W/RAMP/RIBS | 5
22-01-3047 | Headers & Wire Housings HSG 4P W/RAMP/RIBS | 2
22-01-2037 | Headers & Wire Housings HSG 3P WITH LKG RAMP | 2
22-01-3027 | Headers & Wire Housings HSG 2P W/RAMP/RIBS | 5
22-05-2081 | Headers & Wire Housings R/A PCB HDR 8P TIN PLATING | 2
22-05-2111 | Headers & Wire Housings R/A PCB HDR 11P TIN PLATING | 1
22-03-2051 | Headers & Wire Housings VERT PCB HDR 5P TIN PLATING | 2
22-03-2031 | Headers & Wire Housings VERT PCB HDR 3P TIN PLATING | 2

-TOOLS- | |
76650-0009 | Headers & Wire Housings .100KK CONNECTOR KIT PREM CRIMPTOOL 184PC  | 1
8PK-3001D | Wire peelers 0,2-0,8mm2 AWG 20-30 | 1
 | 30mm saw drill for making a hole in the enclosure | 1
 | 25mm diameter pipe to pass through the exterior wall and protect cabling |

-ACCESSORIES- | |
 | M3 bolts 10mm and accessories | 10
 | M3 bolts 25mm and accessories | 7
 | Concrete anchor and screw for a 5mm enclosure hole  | 2
 | Rubber insulation rim for a 30mm hole and 25mm pipe | 1
 | Rubber insulation rim for 5mm hole | 2
 | Rubber insulation sheet | 48 x 76 x 1mm

###Suppliers used
www.mouser.fi  - Electronic components, wire headers and housing.
www.yeint.fi - LED housings, tools and cable
www.ihmevekotin.fi - Raspberry Pi 3 starter kits
www.signalpartners.fi - GFS4400 USB

## 2. Soldering the PCB
Open KiCad/authenticator/authenticator.pro with KiCad and navigate to the electronic schema. Solder this to the general purpose PCB

## 3. Manufacturing the Electronic enclosure and connection rails
Open Blender/enclosure.blend for the layered model of the enclosure, connection rails and electronic components. Take screnshots of the measurements and send it to a CNC workshop for production or you can relatively easily make the connection railings and back plate by hand. Polycarbonate is an easy-to-mold material using a hot air gun and can be acquired rather cheaply from for ex http://www.joensuunkumiporssi.fi/etusivu/

## 4. Making the cabling
Find nice instructables in youtube on how to make Molex headers. Use search words like "Assembling a Molex Connector"

## 5. Assembling all the components
See the Blender model for where everything belongs.
TODO an assembly video.
