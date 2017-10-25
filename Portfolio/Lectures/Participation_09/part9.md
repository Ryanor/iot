# Participation 9

## IoT maintenance

### Predictive Maintenance
- What is predictive maintenance?
  Predictive maintenance techniques are designed to help determine the condition of in-service equipment
  in order to predict when maintenance should be performed. This approach promises cost savings
  over routine or time-based preventive maintenance, because tasks are performed only when warranted.
  
- What problem does it solve?
    - prevent unexpected equipment failures
    - prevent costly equipment failures
    - maximise uptime
    - offer new services to customers
    - learn from machine behavior to improve products

- How is it related to the IoT?
    - machine to machine communication
    - use of different sensor types
    - use of large sensor networks

- three examples
    - Rail industry
    - Airplane engines
    - Solar panels
    - industrial production machines

- Which role does data analysis 
    - SAP HANA analysis large amount of sensor data to predict machine failures
    - Microsoft Azure    

### Heartbeat Monitoring of network nodes
In computer clusters, heartbeat network is a private network which is shared only by the cluster nodes,
and is not accessible from outside the cluster. It is used by cluster nodes in order to monitor each node's
status and communicate with each other.

- How does a heartbeat monitoring in a network work?
    - a network is only shared by the nodes
    - every node sends a signal at a time, which could be interpreted as heartbeat, to tell its status
    up and running
    - a sink is maintaining an ordered list of nodes messages, if a message is missing or has a wrong timestamp
    the node for this message might be damaged
    - hard to find the right time for the messages, to fast produces to much overhead, to slow may be inproper prediction

- What can it be used for?
    - to monitor each nodes status and communicate with each other
    - using FIFO nature for the sent messages
    - in the predictive maintenance it can be used to check if the sensor is alive and sends the correct data

## Project 3 announcement

## Data analysis demonstration
- Matplotlib
    - data visualistation
    - log data from a sensor using log command on ulnoiot
    - use liveplot.py
   
- Nodered
    - install node-red-dashboard via npm packet manager first
    - dashboard delivers new functions to node-red
    - use chart and time for the axis to visualize the data
    - open browser site localhost:1880/ui