EESchema Schematic File Version 2
LIBS:Mega_2560 core mini_full_2.1-rescue
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
LIBS:OPEN_EVO
LIBS:Mega_2560 core mini_full_2.1
LIBS:Mega_2560 core mini_full_2.1-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 5 7
Title "Shield Mega2560 core Full"
Date "2018-02-21"
Rev "2.10"
Comp "© Team OpenAVRc"
Comment1 "Reproduction et commercialisation interdite"
Comment2 "By Antho.breizh / pierrotm777"
Comment3 ""
Comment4 "Shield pour RC OpenAVRc"
$EndDescr
$Comp
L 24C512 U7
U 1 1 59C5670E
P 8250 4050
F 0 "U7" H 8400 4400 60  0000 C CNN
F 1 "FM24W256" H 8500 3700 60  0000 C CNN
F 2 "SOIC-8-FRAM_DI" H 8250 4050 60  0001 C CNN
F 3 "" H 8250 4050 60  0001 C CNN
	1    8250 4050
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR081
U 1 1 59C56715
P 8250 4650
F 0 "#PWR081" H 8250 4400 50  0001 C CNN
F 1 "GND" H 8250 4500 50  0000 C CNN
F 2 "" H 8250 4650 50  0000 C CNN
F 3 "" H 8250 4650 50  0000 C CNN
	1    8250 4650
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR082
U 1 1 59C5671B
P 8250 3350
F 0 "#PWR082" H 8250 3200 50  0001 C CNN
F 1 "VCC" H 8250 3500 50  0000 C CNN
F 2 "" H 8250 3350 50  0000 C CNN
F 3 "" H 8250 3350 50  0000 C CNN
	1    8250 3350
	1    0    0    -1  
$EndComp
$Comp
L C-RESCUE-Mega_2560_core_mini_full_2.0 C22
U 1 1 59C56721
P 8500 3450
F 0 "C22" H 8525 3550 50  0000 L CNN
F 1 "100nF" H 8525 3350 50  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 8538 3300 50  0001 C CNN
F 3 "" H 8500 3450 50  0000 C CNN
	1    8500 3450
	0    -1   -1   0   
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR083
U 1 1 59C56728
P 8700 3450
F 0 "#PWR083" H 8700 3200 50  0001 C CNN
F 1 "GND" H 8700 3300 50  0000 C CNN
F 2 "" H 8700 3450 50  0000 C CNN
F 3 "" H 8700 3450 50  0000 C CNN
	1    8700 3450
	0    -1   -1   0   
$EndComp
Text Label 9200 4150 2    60   ~ 0
Scl
Text Label 9200 4250 2    60   ~ 0
Sda
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR084
U 1 1 59C56730
P 9050 3950
F 0 "#PWR084" H 9050 3700 50  0001 C CNN
F 1 "GND" H 9050 3800 50  0000 C CNN
F 2 "" H 9050 3950 50  0000 C CNN
F 3 "" H 9050 3950 50  0000 C CNN
	1    9050 3950
	0    -1   -1   0   
$EndComp
Text Label 4100 3850 0    60   ~ 0
SCL
Text Label 4100 3950 0    60   ~ 0
SDA
$Comp
L DS3231 U8
U 1 1 59C56738
P 5150 4150
F 0 "U8" H 5150 4650 60  0000 C CNN
F 1 "DS3231SN" H 5150 3650 60  0000 C CNN
F 2 "SO-16-DS3231" H 5100 4100 60  0001 C CNN
F 3 "" H 5100 4100 60  0001 C CNN
	1    5150 4150
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR085
U 1 1 59C5673F
P 4550 4600
F 0 "#PWR085" H 4550 4350 50  0001 C CNN
F 1 "GND" H 4550 4450 50  0000 C CNN
F 2 "" H 4550 4600 50  0000 C CNN
F 3 "" H 4550 4600 50  0000 C CNN
	1    4550 4600
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR086
U 1 1 59C56745
P 5750 4600
F 0 "#PWR086" H 5750 4350 50  0001 C CNN
F 1 "GND" H 5750 4450 50  0000 C CNN
F 2 "" H 5750 4600 50  0000 C CNN
F 3 "" H 5750 4600 50  0000 C CNN
	1    5750 4600
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR087
U 1 1 59C5674B
P 6100 4800
F 0 "#PWR087" H 6100 4550 50  0001 C CNN
F 1 "GND" H 6100 4650 50  0000 C CNN
F 2 "" H 6100 4800 50  0000 C CNN
F 3 "" H 6100 4800 50  0000 C CNN
	1    6100 4800
	1    0    0    -1  
$EndComp
$Comp
L C-RESCUE-Mega_2560_core_mini_full_2.0 C23
U 1 1 59C56751
P 6350 3450
F 0 "C23" H 6375 3550 50  0000 L CNN
F 1 "100nF" H 6375 3350 50  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 6388 3300 50  0001 C CNN
F 3 "" H 6350 3450 50  0000 C CNN
	1    6350 3450
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR088
U 1 1 59C56758
P 6350 3250
F 0 "#PWR088" H 6350 3100 50  0001 C CNN
F 1 "VCC" H 6350 3400 50  0000 C CNN
F 2 "" H 6350 3250 50  0000 C CNN
F 3 "" H 6350 3250 50  0000 C CNN
	1    6350 3250
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR089
U 1 1 59C5675E
P 6350 3650
F 0 "#PWR089" H 6350 3400 50  0001 C CNN
F 1 "GND" H 6350 3500 50  0000 C CNN
F 2 "" H 6350 3650 50  0000 C CNN
F 3 "" H 6350 3650 50  0000 C CNN
	1    6350 3650
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR090
U 1 1 59C56764
P 6050 3750
F 0 "#PWR090" H 6050 3600 50  0001 C CNN
F 1 "VCC" H 6050 3900 50  0000 C CNN
F 2 "" H 6050 3750 50  0000 C CNN
F 3 "" H 6050 3750 50  0000 C CNN
	1    6050 3750
	0    1    1    0   
$EndComp
$Comp
L R-RESCUE-Mega_2560_core_mini_full_2.0 R15
U 1 1 59C5676A
P 5700 3450
F 0 "R15" V 5780 3450 50  0000 C CNN
F 1 "10K" V 5700 3450 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 5630 3450 50  0001 C CNN
F 3 "" H 5700 3450 50  0000 C CNN
	1    5700 3450
	-1   0    0    1   
$EndComp
$Comp
L R-RESCUE-Mega_2560_core_mini_full_2.0 R20
U 1 1 59C56771
P 5900 3450
F 0 "R20" V 5980 3450 50  0000 C CNN
F 1 "10K" V 5900 3450 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 5830 3450 50  0001 C CNN
F 3 "" H 5900 3450 50  0000 C CNN
	1    5900 3450
	-1   0    0    1   
$EndComp
$Comp
L VCC #PWR091
U 1 1 59C56778
P 5900 3250
F 0 "#PWR091" H 5900 3100 50  0001 C CNN
F 1 "VCC" H 5900 3400 50  0000 C CNN
F 2 "" H 5900 3250 50  0000 C CNN
F 3 "" H 5900 3250 50  0000 C CNN
	1    5900 3250
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR092
U 1 1 59C5677E
P 5700 3250
F 0 "#PWR092" H 5700 3100 50  0001 C CNN
F 1 "VCC" H 5700 3400 50  0000 C CNN
F 2 "" H 5700 3250 50  0000 C CNN
F 3 "" H 5700 3250 50  0000 C CNN
	1    5700 3250
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR093
U 1 1 59C56784
P 7450 4150
F 0 "#PWR093" H 7450 3900 50  0001 C CNN
F 1 "GND" H 7450 4000 50  0000 C CNN
F 2 "" H 7450 4150 50  0000 C CNN
F 3 "" H 7450 4150 50  0000 C CNN
	1    7450 4150
	1    0    0    -1  
$EndComp
$Comp
L BATTERY BT1
U 1 1 59C5678A
P 6100 4400
F 0 "BT1" H 6100 4200 50  0000 C CNN
F 1 "CR2032" H 6100 4600 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 6100 4400 60  0001 C CNN
F 3 "" H 6100 4400 60  0000 C CNN
	1    6100 4400
	0    1    1    0   
$EndComp
Text Notes 4050 3150 0    60   Italic 0
Clock
Text Notes 7200 3150 0    60   Italic 0
Fram
Text Notes 6500 4550 1    47   ~ 0
LIR2032\n
Text Notes 6400 4450 1    60   ~ 0
ou
Wire Wire Line
	8250 3350 8250 3550
Wire Wire Line
	8700 3450 8650 3450
Wire Wire Line
	8350 3450 8250 3450
Connection ~ 8250 3450
Wire Wire Line
	8250 4650 8250 4550
Wire Wire Line
	8950 4150 9200 4150
Wire Wire Line
	8950 4250 9200 4250
Wire Wire Line
	8950 3950 9050 3950
Wire Wire Line
	4650 3850 4100 3850
Wire Wire Line
	4650 3950 4100 3950
Wire Wire Line
	4650 4150 4550 4150
Wire Wire Line
	4550 4150 4550 4600
Wire Wire Line
	4650 4550 4550 4550
Connection ~ 4550 4550
Wire Wire Line
	4650 4450 4550 4450
Connection ~ 4550 4450
Wire Wire Line
	4650 4350 4550 4350
Connection ~ 4550 4350
Wire Wire Line
	4650 4250 4550 4250
Connection ~ 4550 4250
Wire Wire Line
	5650 4150 5750 4150
Wire Wire Line
	5750 4150 5750 4600
Wire Wire Line
	5650 4450 5750 4450
Connection ~ 5750 4450
Wire Wire Line
	5650 4350 5750 4350
Connection ~ 5750 4350
Wire Wire Line
	5650 4250 5750 4250
Connection ~ 5750 4250
Wire Wire Line
	5650 4050 6100 4050
Wire Wire Line
	6100 4700 6100 4800
Wire Wire Line
	6350 3300 6350 3250
Wire Wire Line
	6350 3650 6350 3600
Wire Wire Line
	6050 3750 5650 3750
Wire Wire Line
	5700 3600 5700 3850
Wire Wire Line
	5700 3850 5650 3850
Wire Wire Line
	5900 3600 5900 3950
Wire Wire Line
	5900 3950 5650 3950
Wire Wire Line
	5700 3300 5700 3250
Wire Wire Line
	5900 3300 5900 3250
Wire Wire Line
	7550 3850 7450 3850
Wire Wire Line
	7450 3850 7450 4150
Wire Wire Line
	7550 4050 7450 4050
Connection ~ 7450 4050
Wire Wire Line
	7550 3950 7450 3950
Connection ~ 7450 3950
Wire Wire Line
	6100 4050 6100 4100
Wire Notes Line
	3900 3000 6650 3000
Wire Notes Line
	6650 3000 6650 5000
Wire Notes Line
	6650 5000 3900 5000
Wire Notes Line
	3900 5000 3900 3000
Wire Notes Line
	7050 3000 9350 3000
Wire Notes Line
	9350 3000 9350 5000
Wire Notes Line
	9350 5000 7050 5000
Wire Notes Line
	7050 5000 7050 3000
$Comp
L VCC #PWR094
U 1 1 59C57848
P 2250 3800
F 0 "#PWR094" H 2250 3650 50  0001 C CNN
F 1 "VCC" H 2250 3950 50  0000 C CNN
F 2 "" H 2250 3800 50  0000 C CNN
F 3 "" H 2250 3800 50  0000 C CNN
	1    2250 3800
	-1   0    0    1   
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR095
U 1 1 59C5784E
P 2550 3800
F 0 "#PWR095" H 2550 3550 50  0001 C CNN
F 1 "GND" H 2550 3650 50  0000 C CNN
F 2 "" H 2550 3800 50  0000 C CNN
F 3 "" H 2550 3800 50  0000 C CNN
	1    2550 3800
	1    0    0    -1  
$EndComp
Text Label 2050 3700 1    60   ~ 0
Scl
Text Label 2150 3700 1    60   ~ 0
Sda
$Comp
L C-RESCUE-Mega_2560_core_mini_full_2.0 C1
U 1 1 59C57856
P 2400 3600
F 0 "C1" H 2425 3700 50  0000 L CNN
F 1 "100nF" H 2425 3500 50  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 2438 3450 50  0001 C CNN
F 3 "" H 2400 3600 50  0000 C CNN
	1    2400 3600
	0    1    1    0   
$EndComp
$Comp
L CONN_01X04 P15
U 1 1 59C5785D
P 3200 3200
F 0 "P15" H 3200 3450 50  0000 C CNN
F 1 "LCD_I2C" V 3300 3200 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04_Pitch2.54mm" H 3200 3200 50  0001 C CNN
F 3 "" H 3200 3200 50  0000 C CNN
	1    3200 3200
	0    -1   -1   0   
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR096
U 1 1 59C57864
P 3050 3700
F 0 "#PWR096" H 3050 3450 50  0001 C CNN
F 1 "GND" V 3050 3500 50  0000 C CNN
F 2 "" H 3050 3700 50  0000 C CNN
F 3 "" H 3050 3700 50  0000 C CNN
	1    3050 3700
	1    0    0    -1  
$EndComp
Text Label 3250 3650 1    60   ~ 0
Sda
Text Label 3350 3650 1    60   ~ 0
Scl
$Comp
L VCC #PWR097
U 1 1 59C5786C
P 2250 4800
F 0 "#PWR097" H 2250 4650 50  0001 C CNN
F 1 "VCC" H 2250 4950 50  0000 C CNN
F 2 "" H 2250 4800 50  0000 C CNN
F 3 "" H 2250 4800 50  0000 C CNN
	1    2250 4800
	-1   0    0    1   
$EndComp
$Comp
L GND-RESCUE-Mega_2560_core_mini_full_2.0 #PWR098
U 1 1 59C57872
P 2550 4800
F 0 "#PWR098" H 2550 4550 50  0001 C CNN
F 1 "GND" H 2550 4650 50  0000 C CNN
F 2 "" H 2550 4800 50  0000 C CNN
F 3 "" H 2550 4800 50  0000 C CNN
	1    2550 4800
	1    0    0    -1  
$EndComp
Text Label 2050 4700 1    60   ~ 0
Scl
Text Label 2150 4700 1    60   ~ 0
Sda
$Comp
L CONN_01X04 P3
U 1 1 59C5787A
P 2200 4200
F 0 "P3" H 2200 3950 50  0000 C CNN
F 1 "Option" V 2300 4200 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04_Pitch2.54mm" H 2200 4200 50  0001 C CNN
F 3 "" H 2200 4200 50  0000 C CNN
	1    2200 4200
	0    1    -1   0   
$EndComp
$Comp
L CONN_01X04 P2
U 1 1 59C57881
P 2200 3200
F 0 "P2" H 2200 2950 50  0000 C CNN
F 1 "Clock" V 2300 3200 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04_Pitch2.54mm" H 2200 3200 50  0001 C CNN
F 3 "" H 2200 3200 50  0000 C CNN
	1    2200 3200
	0    1    -1   0   
$EndComp
$Comp
L C-RESCUE-Mega_2560_core_mini_full_2.0 C2
U 1 1 59C57888
P 2400 4600
F 0 "C2" H 2425 4700 50  0000 L CNN
F 1 "100nF" H 2425 4500 50  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 2438 4450 50  0001 C CNN
F 3 "" H 2400 4600 50  0000 C CNN
	1    2400 4600
	0    1    1    0   
$EndComp
Connection ~ 2550 4600
Wire Wire Line
	2550 4450 2550 4800
Wire Wire Line
	2350 4450 2550 4450
Wire Wire Line
	2350 4400 2350 4450
Connection ~ 2250 4600
Wire Wire Line
	2250 4400 2250 4800
Wire Wire Line
	2050 4400 2050 4700
Wire Wire Line
	2150 4400 2150 4700
Connection ~ 2550 3600
Wire Wire Line
	2550 3450 2550 3800
Connection ~ 2250 3600
Wire Wire Line
	2250 3400 2250 3800
Wire Wire Line
	3350 3400 3350 3650
Wire Wire Line
	3250 3400 3250 3650
Wire Wire Line
	2050 3400 2050 3700
Wire Wire Line
	2150 3400 2150 3700
Wire Wire Line
	3050 3400 3050 3700
$Comp
L VCC #PWR099
U 1 1 59C578A5
P 3150 3700
F 0 "#PWR099" H 3150 3550 50  0001 C CNN
F 1 "VCC" V 3150 3900 50  0000 C CNN
F 2 "" H 3150 3700 50  0000 C CNN
F 3 "" H 3150 3700 50  0000 C CNN
	1    3150 3700
	-1   0    0    1   
$EndComp
Wire Wire Line
	3150 3700 3150 3400
Wire Wire Line
	2350 3450 2550 3450
Wire Wire Line
	2350 3450 2350 3400
Wire Wire Line
	2050 3450 1750 3450
Connection ~ 2050 3450
Text GLabel 1750 3450 0    60   Input ~ 0
Scl
Wire Wire Line
	2150 3550 1750 3550
Connection ~ 2150 3550
Text GLabel 1750 3550 0    60   BiDi ~ 0
Sda
$Comp
L R-RESCUE-Mega_2560_core_mini_full_2.0 R21
U 1 1 59D4D3D2
P 4400 3450
F 0 "R21" V 4480 3450 50  0000 C CNN
F 1 "4,7K" V 4400 3450 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 4330 3450 50  0001 C CNN
F 3 "" H 4400 3450 50  0000 C CNN
	1    4400 3450
	-1   0    0    1   
$EndComp
$Comp
L R-RESCUE-Mega_2560_core_mini_full_2.0 R38
U 1 1 59D4D3D8
P 4600 3450
F 0 "R38" V 4680 3450 50  0000 C CNN
F 1 "4,7K" V 4600 3450 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 4530 3450 50  0001 C CNN
F 3 "" H 4600 3450 50  0000 C CNN
	1    4600 3450
	-1   0    0    1   
$EndComp
$Comp
L VCC #PWR0100
U 1 1 59D4D3DE
P 4600 3250
F 0 "#PWR0100" H 4600 3100 50  0001 C CNN
F 1 "VCC" H 4600 3400 50  0000 C CNN
F 2 "" H 4600 3250 50  0000 C CNN
F 3 "" H 4600 3250 50  0000 C CNN
	1    4600 3250
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR0101
U 1 1 59D4D3E4
P 4400 3250
F 0 "#PWR0101" H 4400 3100 50  0001 C CNN
F 1 "VCC" H 4400 3400 50  0000 C CNN
F 2 "" H 4400 3250 50  0000 C CNN
F 3 "" H 4400 3250 50  0000 C CNN
	1    4400 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	4400 3300 4400 3250
Wire Wire Line
	4600 3300 4600 3250
Wire Wire Line
	4600 3600 4600 3850
Connection ~ 4600 3850
Wire Wire Line
	4400 3600 4400 3950
Connection ~ 4400 3950
$EndSCHEMATC
