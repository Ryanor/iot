# Participation 8

## Discussion about what is broken in the Internet of Things

### What is broken?
- Nodes are directly connected to the company servers
- Update philosophy of the companies
- No extra layers to seperate nodes from the internet


### What is fixed?
- With a Gateway how is responsible to update the system, who has access to the system
- A layered architecture of gateways that seperate the nodes from direct 
acces to the internet


## LORA

###
Low Power Wide Area Netork LPWAN
 
 - new transmission standard between distributed devices and distributed gateways

- relation bandwith/range/power
low power, long range but reduced bandwith (the lower capacity)

- Link budget
    - - very high link budget
    - connection between sender and receiver
    - decreased by objstacles between sender and receiver
    - 154db link budget
    - range theoretically 1300km
    - range can be increased by amplifier or antennas

- community approach
    - The things network
    - distributied gateways
    - transfer data between devices and applications
    - provide maps of available gateways
    - free of charge
    - community approach is based on privately built and operated gateways and an 
    infrastructure which transfers data from the sensors to the gateways

- benefits of LORA
    - license free
    - LoRaAlliance
    - LoRaWAN
    - reduces traffic from the gateway to the sensor
    - prefers traffic from the sensor to th e gateway
        
- problems with LORA
    - limited sending power 
    - narrow bandwith
    - 250bps to 50kbps
    
## Google research on 
### Link budget
- is accounting all of the gains and losses of the transmitter through the medium to the receiver
    in a telecommunication system
- received power = transmitted power + gain - loss


### LORA in Linz
- Linz AG provides LoRaWAN network
    - energy montoring
    - smart lighting
    - customer frquency measuring
    - leackage monitoring for the industrie
    - security monitoring
    - smart environment
### Calculation
 1300km distance
 0.868 GHz
 0 at all fields
 received power -153.5 dBm
 
 800km
 0.868 GHz
 0 at all fields
 received power -149.3
 
### Discussion
- good for long transmissions
- low data rates
- low power consumption
- perfect for IoT
 
## TTN The things network
- strong community
- is building a network for the IoT
- open source
- decentralized network
- provides devices and SDK´s for Arduino 
- everyone can join to their network and extend it creating a gateway
- license free ISM band
- supports applications and supports IFTTT and Node-RED
- you have to register to the TTN to use it
 