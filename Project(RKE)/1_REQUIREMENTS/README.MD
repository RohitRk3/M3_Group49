# Remote Keyless Entry

## Introduction
The term remote keyless system (RKS), also known as keyless entry or remote central locking, refers to a lock that employs an electronic remote control as a key, which can be activated manually or automatically by proximity.
An RKS, which is widely used in automobiles, performs the functions of a standard car key without requiring physical contact. When you're within a few yards of the car, press a button on the remote to lock or unlock the doors, as well as perform other functions.
Remote Keyless Entry Systems (RKES) are also prone to flaws. The systems typically have simple functionality: open/close and, on occasion, a function to locate the car or unlock the trunk. The remotes typically operate on the 315MHz, 433MHz, and 868MHz radio bands.which are completely free to use Many RKES are unidirectional, but some are bidirectional and can be used for challenge-response authentication. Nowadays, unidirectional RKES are usually equipped with a rolling code. A rolling code is calculated on both the receiver (car) and the transmitter (key), and if a received signal matches, the car opens/closes. This way, the transmission is unique each time, preventing a simple replay attack.

## High Level Requirements
|ID|High Level Requirements|
|--|-----------------------|
|1|To transmit RF signals from the key, a transmitter is required.|
|2|The signal must be received and verified by a receiver.|
|3|Print Lock when switch is  fliked for  once|
|4|print unlock when switch fliked for twice|
|5|Print alarm activation/deactivation when switch flicked 3 times|
|6|Print approach light when switch flicked four times|

## Low Level Requirements
|ID|High Level Requirements|
|--|-----------------------|
|1|All LEDs should turn ON when switch flicked once|
|2|All LEDs should turn OFF when switch flicked  twice|
|3|	All LEDs should turn ON in clockwise manner when switch flicked thrice|
|4|All LEDs should turn ON in anticlockwise manner when switch flicked 4 times|


## Swot analysis
|Strength|       Weakness|Opportunites|Threats|
|--------|       --------|------------|-------|
|Easily Accesible|Maybe it can have some vulnerabilites|As now everything is being digitalized and market needs more of automation|Hackers can try to hack and get accesed to our info|
|Advanced Encryption|System dependent if something goes wrong in system it may effect user|

## 5W and 1 H
    Who   :Who wants to control the actions of car remotely.
    What  :Remote keyless entry systems allow you to unlock and lock your vehicle's doors without using a key.
    Where :Remote Keyless Entry system is widely used in automobiles, smart locks.
    When  :Controlling locks
    Why   :To lock the car remotely using a handy device.
    How   :When a button is flicked, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the car
## Application
    *Widely used in automobile Industry.
