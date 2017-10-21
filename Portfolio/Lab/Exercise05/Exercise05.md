# Lab 5

### show project 1 

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
- wifi connection mistake
- run mistake

Installed ulnoiot-framework on my machine
