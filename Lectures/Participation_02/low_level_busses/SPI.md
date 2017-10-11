## SPI

Serial peripheral interface for synchronous serial communication
Used for short distances and mostly used in embedded systems
Standard from Motorola.

Master-Slave architecture, full-duplex communication using four wires.
•	SCLK: Serial Clock (output from master).
•	MOSI: Master Output Slave Input, or Master Out Slave In (data output from master)
•	MISO: Master Input Slave Output, or Master In Slave Out (data output from slave).
•	SS: Slave Select (often active low, output from master).

Master configures the clock which must be supported from the slave device
The master then selects the slave device with a logic level 0 on the select line. If a waiting period is required, such as for an analog-to-digital conversion, the master must wait for at least that period of time before issuing clock cycles.
Frequency up to a few MHz, limiting also the wire length
Connection of more devices possible

SPI is used to talk to a variety of peripherals, such as:
•	Sensors
	- temperature, pressure, ADC, touchscreens, video game controllers
•	Control devices 
	- audio codecs, digital potentiometers, DAC
•	Camera lenses
	- Canon EF lens mount
•	Communications
	- Ethernet, USB, USART, CAN, IEEE 802.15.4, IEEE 802.11, handheld video games
•	Memory 
	- flash and EEPROM
•	Real-time clocks
•	LCD, sometimes even for managing image data
•	Any MMC or SD card 
