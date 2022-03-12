# Table of content                                                                                                           
## 1. About Remote KeyLess Entry(R.K.E)
    1. Description                               
    2. Identifying features
    3. State of art
    4. 5W’s & 1H and S.W.O.T analysis
 ### 2. Requirements
    1. High level requirements
    2. Low level requirements
### 3. Architecture
    1. Behavioural Diagram
      1. High Level Flow chart Behavioural Diagram
      2. Low Level Flow chart Behavioural Diagram
    1. Structural Diagram
      1. High Level UML Use Case Structural Diagram
      2. Low Level UML Use Case Structural Diagram
#### 4. Test plan and Output
    1. High level test plan
    2. Low level test plan
## 1.1 Description
### A remote keyless entry system simply refers to any electronic lock that functions without the use of a mechanical key. Commonly, this comes in the form of a key fob, with buttons that communicate using radio frequency (RF) signals with a receiver to perform a certain action, such as locking or unlocking a vehicle.
## 1.2 components Required:
### A transmitter and a receiver.
Transmitter - RKE key fob, other ID device with RKE integrated Receiver-Body Control ECU, other ECU with integrated RKE
#### 2.RKE operates by broadcasting radio waves on a particular frequency

## 1.3 Features
### LCD display should be provided on the keyfob to display the car's status.
### High security is provided to unlock the system.
### It shall print the car's window status on LCD (Blue switch on - All led on at the same time)
### It shall print the car's alarm status on LCD (Blue switch press two times - All led off at the same time)
### It shall print the car's battery information on LCD (Blue switch press three times - All led on in clockwise manner)
### It shall print the car's door status on LCD (Blue switch press four times - All led on in clockwise manner)

## 1.4 State of art
### The main focus of this project is to operate the car's window , alarm , battery and door. The frequency set in the RKE will be matched with the car as per requirements set in the code. A security code shall be fixed which ensures security to the car. A LCD screen can be seen which displays all the current status of the car. We can further operate the car using this information.By combining all these features a final product is made known as BiCom. As the technology is increasing rapidly these kind of automations are very useful in our daily lives.

# 1.5 4W 1H


### WHY
This project will help us to lock the vehicle and unlock the vehicle remotly when needed .
 we can control the car from a distance. More security and easy to use. 


### WHAT
 RKE systems for cars can be used to control the vehicle's ignition system, security alarm, horn, lights and trunk.


### WHERE
It is used to control entry to premises and specific areas of buildings, such as garages parking lots etc
 
### WHEN

To secure you vehicle on parking .    

### HOW
By using a small Radio Transmitter and reciver we will make our project work.

# 1.6 Swot Analysis:
## Strengths:
### No need of human interaction with car. Excellent Safety protocol is used(Encryption). Easy usage of features with a user press button
## Weaknesses:
### Limited Usage Range *Not able to see the status of the car "Interrupts or Timers would be good instead of delay.
## Opportunities:
### Wide scope in field of automobiles. *Cost Efficient. *Car Safety is assured helps in increase in demand.
## Threats:
### Less accurate timing We should wait until completion of a task to run an other task.

# 2 Requirements:
## 2.1 High Level Requirements:
1.System shall be provided with Approach Light
2.System shall be provided with wireless Alarm activation and Deactivation
3.System shall be made as Hack proof
4.System shall be provided with wireless Lock and Unlock system

## 2.2 Low Level Requirement :
1. In case of mistouch the doors will be opened .

## APPLICATIONS:
### Remote keyless entry systems, now fairly commonplace devices, provide car owners with a degree of convenience, making the task of physically inserting a key unnecessary. A passive keyless entry (PKE) system uses advanced technology to take vehicle accessibility to a higher level.

# Behaviour Diagrams
# High Level Behaviour Diagram

![](https://github.com/naveenreddiedodla/M3_grpno.48/blob/c38580f00b14c601064881d7611d0fbfa2c5f511/Remote_keyless_Entry(RKE)/2_Architecture/High%20level%20Behavioural%20diagram.png)
# Low Level Behaviour Diagram
![](https://github.com/naveenreddiedodla/M3_grpno.48/blob/c38580f00b14c601064881d7611d0fbfa2c5f511/Remote_keyless_Entry(RKE)/2_Architecture/Low%20level%20behavioural%20diagram.drawio%20(1).png)
# High Level Structural Diagram
![](https://github.com/naveenreddiedodla/M3_grpno.48/blob/c38580f00b14c601064881d7611d0fbfa2c5f511/Remote_keyless_Entry(RKE)/2_Architecture/High%20Level%20structural%20dIagram.png)
# Low Level Structural Diagram
![](https://github.com/naveenreddiedodla/M3_grpno.48/blob/c38580f00b14c601064881d7611d0fbfa2c5f511/Remote_keyless_Entry(RKE)/2_Architecture/Low%20Level%20structural%20Diagram.png)

## HIGH LEVEL TEST PLAN 

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 1 | car lock | Press button | car locked | car locked |
| 2 | car unlock | press button | car unlocked | car unlocked|
| 3 | Alarm activation  | press button | Alarm activated | alarm activated |
| 4 | alarm deactivation | press button | alarm deactivated | alarm deactivated |

---

## LOW LEVEL TEST PLAN 

| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 1 | Check for ALLLED_ON() | PRESS BUTTON | ALL LED ON | ALL LED ON | ✅ | 
| 2 | Check for ALLLED_OFF() | PRESS BUTTON | ALL LED OFF | ALL LED OFF |  ✅  |  
|  3 | Check for LEDCW_ON() | PRESS BUTTON | Clockwise rotation led on | clockwise rotation led on | ✅ | 
| 4 |  Check for LEDACW_ON() | PRESS BUTTON | Anticlockwise rotation on | anticlockwise rotation on |  ✅ | 
