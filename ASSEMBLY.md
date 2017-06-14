###IN THIS DOCUMENT
We define how to assemble the Toveri.
###OVERVIEW OF THE ASSEMBLY
The assembly is divided into the following steps and documents supporting the steps:

**Table of Contents**

[TOC]

## 1. Ordering all the needed components, devices and tools.

###Used suppliers

These suppliers should have access to the desired components:

- www.mouser.fi
- www.yeint.fi
- fi.rsdelivers.com      (Raspberry Pis)
- www.signalpartners.fi  (GFS4400)
- www.wurthelektronik.fi (ohutlevykiinnikkeet)

###Bill of materials

Supplier | Mfr. # | Description | Quantity
---------|--------|---------------|------------
-PCB- | | |
Mouser | UMW0G101MDD | Aluminium Electrolytic Capacitors - Leaded 4volts 100uF 85c 5x5 2LS | 1
Mouser | MF1/4DC4701F | Metal Film Resistors - Through Hole 4.7K 1% 100PPM | 1
Mouser | MF1/4DC1000F | Metal Film Resistors - Through Hole 100ohm 1% 100PPM | 3
Mouser | MF1/4CCT52R2200F | Metal Film Resistors - Through Hole 1/4 WATT 220 OHM 1% | 3
Mouser | EC2-3NU | Low Signal Relays - PCB 3V 10uA Relay Signal 2formC | 1
Mouser | EC2-3TNU | Low Signal Relays - PCB 3V 10uA Relay Signal 2formC | 1
Mouser | TP224003-3 | Speakers & Transducers Piezo Transducer | 1
Mouser | DS18B20+ | Board Mount Temperature Sensors Prgmble Resolution 1-Wire Parasite Pwr | 1
Mouser | C3200-6136A | Thermoelectric Modules FLEX HEATERS | 1
Mouser | SB400 | PCBs & Breadboards 400 TIE POINT SLDR PC BDBOARD | 1
Mouser | 1550KBK | Enclosures, Boxes & Cases Diecast Aluminum Box 5.51x2.9x4.02" Black | 1
Mouser | 1550KSGASKET | Enclosures, Boxes & Cases IP68 GasketKit/Pack2 For use with 1550K | 0.5
yeint | 1551GFLGY | ABS-MUOVIK.50x35x20mm HARMAA IP54 | 1
Mouser | 1N4154TAP | Diodes - General Purpose, Power, Switching Vr/35v Io/150mA | 3
Mouser | WP154A4SUREQBFZGC | Standard LEDs - Through Hole RGB 630/525/465nm 750/420/750mcd 60Deg | 1
Mouser | NHD-0420CW-AB3 | OLED Displays & Accessories 4x20 Blue Slim Character OLED | 1
yeint  | SML1083 | 5mm LEDKEHYS/O-RENG./LINSSI, KROMI | 1
yeint | 5-826629-0 | 1X50NAP SUORA, KULTA | 1

-DEVICES- | | |
RS | 896-8660 | Raspberry Pi 3 Model B | 1
RS | 909-8138 | Official Raspberry Pi 3 B Development Board Case, Black, Grey | 1
RS | 909-8135 | Official Pi 3 Power Supply Black | 1
RS | 917-6317 | Sandisk Micro SD Card NOOBS Raspberry Pi | 1
Signalpartners | GFS4470 | Datalogic Gryphon GFS4400 USB | 1
yeint | MW 3IP25GS | HAKKURITEHOLÄHDE 100-240V/3-12V/27W | 1

-CABLING- | | |
yeint | 135.2802.326 | 26-NAP. AWG28 7/0 VÄRIKOOD. 30.5m | 3m
08-50-0114 | Headers & Wire Housings CRIMP TERM 22-30 TIN | 100
Mouser | 22-01-2107 | Headers & Wire Housings HSG 10P W/LKG RAMP | 2
Mouser | 22-01-3067 | Headers & Wire Housings HSG 6P W/RAMP/RIBS | 2
Mouser | 22-01-3057 | Headers & Wire Housings HSG 5P W/RAMP/RIBS | 5
Mouser | 22-01-3047 | Headers & Wire Housings HSG 4P W/RAMP/RIBS | 2
Mouser | 22-01-2037 | Headers & Wire Housings HSG 3P WITH LKG RAMP | 2
Mouser | 22-01-3027 | Headers & Wire Housings HSG 2P W/RAMP/RIBS | 5
Mouser | 22-05-2081 | Headers & Wire Housings R/A PCB HDR 8P TIN PLATING | 2
Mouser | 22-05-2111 | Headers & Wire Housings R/A PCB HDR 11P TIN PLATING | 1
Mouser | 22-03-2051 | Headers & Wire Housings VERT PCB HDR 5P TIN PLATING | 2
Mouser | 22-03-2031 | Headers & Wire Housings VERT PCB HDR 3P TIN PLATING | 2
yeint | USB2-AAMF180M | USB2.0 JATKOKAAPELI 1.8m | 1
yeint | CAT6-300SSTP-VA | CAT6 kaapeli sftp valkoinen 3m | 1
yeint | 810-4605YE | DC Naarasliitin 5.5x2.1mm ruuvil. | 1

-TOOLS- | | |
-cables- | | |
Mouser | 76650-0009 | Headers & Wire Housings .100KK CONNECTOR KIT PREM CRIMPTOOL 184PC  | 1
Mouser | 8PK-3001D | Wire peelers 0,2-0,8mm2 AWG 20-30 | 1
Rautakauppa | | 30mm saw drill for making a hole in the enclosure | 1
Rautakauppa | | 25mm diameter pipe to pass through the exterior wall and protect cabling | 50cm
-soldering-  | | |
yeint | SS-257B | JUOTINASEMA DIGIT 75W ESD USB | 1
yeint | 5SI-216N-0,8D | VARATERÄ 0,8mm TALTTA | 2
yeint | MINI FLUXER 500-6B | FLUKSIKYNÄ AKTIV 10ML LF NO-CLEAN | 1
yeint | ECO TSC263-115-0.3-2 | SAC-JUOTOSTINA 250G 0.3 KS115 1C | 1
yeint | STAND20 | JUOTINTELINE YLEISKÄYTTÖÖN | 1
yeint | 608-391A | PIIRILEVYNPIDIN, APUKÄSI, LUUPPI | 1
yeint | 52242099 | PUHDISTUSSIENI 2-kerros 5KPL/PKT | 1
yeint | WDC-V2 | KUIVAPUHDISTINVILLA RST, WDC2, 2KPL | 1
yeint | KONTAKT IPA | ISOPROPANOLIPUHDISTUSAINE 200 ml | 1
yeint | AA1.5 |	TINAIMUNAUHA 1.5mm/1.5m KELTAINEN | 1
-wall mounting- | | |
Wurth | | Niittimutteripihdit | 1

-ACCESSORIES- | | |
Rautakauppa | | M3 bolts 10mm and accessories | 10
Rautakauppa | | M3 bolts 25mm and accessories | 7
Rautakauppa | | Concrete anchor and screw for a 4mm enclosure hole  | 2
Rautakauppa | | Metal plate (depth 2mm) anchor and screws for 4mm enclosure hole | 2
Wurth | | Niittimutterit M3 | 2
Rautakauppa | | Rubber insulation rim for a 30mm hole and 25mm pipe | 1
Rautakauppa | | Rubber insulation rim for 5mm hole | 2
Rautakauppa | | Silicone insulation sheet | 48 x 76 x 1mm
Rautakauppa | | Silicone insulation sheet | 48 x 15 x 1mm

## 2. Soldering the PCB
Open KiCad/authenticator/authenticator.pro with KiCad and navigate to the electronic schema. Solder this to the general purpose PCB

## 3. Manufacturing the Electronic enclosure and connection rails
Open Blender/enclosure.blend for the layered model of the enclosure, connection rails and electronic components.
Easiest way is to order 3D-prints of the internal plastic pieces from Shapeways.com.
You can also extract the measurements and send it to a CNC workshop for production,
or you can relatively easily make the connection railings and back plate by hand. Polycarbonate is an easy-to-mold material using a hot air gun and can be acquired rather cheaply from for ex http://www.joensuunkumiporssi.fi/etusivu/

## 4. Making the cabling
Find nice instructables in youtube on how to make Molex headers. Use search words like "Assembling a Molex Connector"
See the KiCad/authenticator/authenticator.pro for the used headers.

## 5. Assembling all the components
See the Blender model for where everything belongs.
TODO an assembly video.
