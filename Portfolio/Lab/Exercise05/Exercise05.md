# Lab 5

## Presentation of Project 1 

### Update ulnoiot
- connect to pi@192.168.12.1
- cd ulnoiot
- git pull
- fix_bin
- ulnoiot upgrade
- reboot

Download midnight commander
and use midnight commander to copy
/home/pi/ulnoiot/lib/system_template
to the local system
/home/gwu/ulnoiot_template


### Create analog sound sensor
- copy folder node_template to sound folder
- delete key.hex in sound folder
- command initialize flashes the WeMos board
- after flashing connect with command "console_serial" to the WeMos board
- in the console use analog("noise", precision=10) command to create the analog device


Failures:
- wifi was not connected to the acccesspoint running on the Pi
- run.py mistake

### Installed [ulnoiot-framework](https://github.com/ulno/ulnoiot.git) on my machine
- followed installation manual on github
	- installed dependencies with the systems package manager
	- cloned the repository
	- made ulnoiot runnable
	- edited .bash.rc and added source for lib/shell_starter/ulnoiot.bash
	- Loop:
		- started ulnoiot
		- installed missing dependencies
		- started ulnoiot again

- started ulnoiot
- flashed the WemosD1mini board as described above


Failure:
- in my bash.rc was the prompt modified
	- ulnoiot couldn´t overwrite my prompt and therefore ulnoiot prompt was not correctly shown
	- Added an Issue to the project for overwriting the prompt command
	