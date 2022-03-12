# Report
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
# ARCHITECTURE

## Structural Diagram
![whatsapp](https://user-images.githubusercontent.com/98874243/157894913-02488050-16cf-4e0a-b485-957620663b33.png)
## Behavioural Diagram
![Screenshot (325)](https://user-images.githubusercontent.com/98874243/157909367-71fa0bb4-d263-46d6-932e-10f6a21cf8b6.png)

# Test plan

## High Level Test Plan:

| ID | Description | Expected i/p | Expected o/p | Actual o/p | Test Status |
| ----- | ----- | ------- |  ------- | ----- | ----- |
|HLT1|Lock the door|Button Press|Lock the door|Lock the door|Pass|
|HLT2|Unlock the door|Button press|Unlock the door|Unlock the door|Pass|
|HLT3|Activation & Deactivation of alarm|Button press|Alaram is activated or deactivated|Alaram is activated or deactivated|Pass|
|HLT4|Approach the light|Button press|Approaching lights on|Approaching lights on|Pass|

## Low Level Test Plan:

| ID | Description | Expected i/p | Expected o/p | Actual o/p | Test Status |
| ----- | ----- | ------- |  ------- | ----- | ----- |
|LLT1|Lock the door|Press the button once|All the LED's turn on at same time|All the LED's turn on at same time|Pass|
|LLT2|Unlock the door|Press the button twice|All the LED's turn off at same time|All the LED's trun off at same time|Pass|
|LLT3|Activation & Deactivation of alarm|Press the button thrice|All the LED's blink in the clockwise direction|All the LED's blink in the clockwise direction|Pass|
|LLT4|Approach the light|Button is pressed four times|All the LED's blink in anticlockwise direction|All the LED's blink in anticlockwise direction|Pass|

# Output
![ezgif com-gif-maker](https://user-images.githubusercontent.com/46928815/158012931-032dbeeb-fc0b-4ffe-8d48-fc68f42a25a2.gif)



