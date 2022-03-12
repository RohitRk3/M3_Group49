# Remote Keyless Entry

## Introduction
The term remote keyless system (RKS), also known as keyless entry or remote central locking, refers to a lock that employs an electronic remote control as a key, which can be activated manually or automatically by proximity.
An RKS, which is widely used in automobiles, performs the functions of a standard car key without requiring physical contact. When you're within a few yards of the car, press a button on the remote to lock or unlock the doors, as well as perform other functions.
Remote Keyless Entry Systems (RKES) are also prone to flaws. The systems typically have simple functionality: open/close and, on occasion, a function to locate the car or unlock the trunk. The remotes typically operate on the 315MHz, 433MHz, and 868MHz radio bands.which are completely free to use Many RKES are unidirectional, but some are bidirectional and can be used for challenge-response authentication. Nowadays, unidirectional RKES are usually equipped with a rolling code. A rolling code is calculated on both the receiver (car) and the transmitter (key), and if a received signal matches, the car opens/closes. This way, the transmission is unique each time, preventing a simple replay attack.

## High Level Requirements
|ID|High Level Requirements|Category |
|--|-----------------------|------- |
|HLR01|To transmit RF signals from the key, a transmitter is required.|Technical|
|HLR02|The signal must be received and verified by a receiver.|Technical|
|HLR03|Print Lock when switch is  fliked for  once|Technical|
|HLR04|print unlock when switch fliked for twice|Technical|
|HLR05|Print alarm activation/deactivation when switch flicked 3 times|Technical|
|HLR06|Print approach light when switch flicked four times|Technical|

## Low Level Requirements
|ID|High Level Requirements|Category |
|--|-----------------------|------- |
|LLR01|All LEDs should turn ON when switch flicked once|Technical|
|LLR02|All LEDs should turn OFF when switch flicked  twice|Technical|
|LLR03|	All LEDs should turn ON in clockwise manner when switch flicked thrice|Technical|
|LLR04|All LEDs should turn ON in anticlockwise manner when switch flicked 4 times|Technical|


## Swot analysis
![1647073568368](https://user-images.githubusercontent.com/46928815/158010553-1f0e7fba-7eb5-41b5-9828-ea1c7dee8b85.png)

## 5W and 1 H
![1647073383666](https://user-images.githubusercontent.com/46928815/158010540-4c228454-af9c-4d0b-b02b-bfa3d8ecb806.png)

## Application
   * Widely used in automobile Industry.
