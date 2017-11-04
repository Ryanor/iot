## I²C
Type:
- serial computer bus

Used in:
- lower-speed peripherals ICs to processors and microcontrollers in short-distance, intra-board communication

Data signal:
- Open-drain

Protocol:
- Serial, half-duplex

Bitrate:
- 0.1 / 0.4 / 1.0 / 3.4 / 5.0 Mbit/s

Applications:
- Reading configuration data from SPD EEOPROMs on DIMM memory sticks
- Accessing NVRAM chip that keeps user settings
- Accessing low speed DACs and ADCs
- Changing sound volume in intelligent speakers
- Controlling OLED/LCD displays, like in a cellphone
- Reading real-time clocks
- Turning on and off the power supply of system components.

Operation system support:
- AmigaOS
- Arduino (Wire library)
- Maximite
- PICAXE
- eCos
- ChibiOS/RT
- FreeBSD/NetBSD/OpenBSD
- Linux with specific device driver
- Max OS X
- Microsoft Windows
- Unison OS
- Windows CE
- RISC OS

Design:
- 7-bit or 10-bit address space
- 100 kbit/s standard mode speed
- 10 kbit/s low-speed mode
- 400 kbit/s Fast mode
- 1 Mbit/s Fast mode plus
- 3.4 High speed mode

Pair-Communication same group: (Slava)
- Inventor Phillips
- two lines, one for data (USDA) one for clock (USCL)
- Voltage 5V and 3.3V
- Length restricted to few meters
- Always master and slave 