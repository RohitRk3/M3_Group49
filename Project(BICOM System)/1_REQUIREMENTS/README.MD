# BICOM SYSTEM


## INTRODUCTION
The extension of a unidirectional RKE system to a bidirectional RKE system is known as a BiCom system. The RKE delivers a radio wave to the receiver at a specific frequency, and the vehicle authenticates the fob by sending back the status. This project provides an overview of BiCom systems, covering their functional design and requirements, as well as their analysis and implementation on a variety of levels.

## HIGH LEVEL REQUIREMENTS
|ID|High level requirements| Category |
|-|------------------------| ------- |
|1|Transmitter is required to transmit RF signals from the key|Technical|
|2|The signal must be received and verified by the receiver|Technical|
|3|Print window status when blue switch on|Technical|
|4|Print car battery info when blue switch press 3 times|Technical|
|5|Print Door status when blue switch press 4 times|Technical|

## LOW LEVEL REQUIREMENTS
|ID|LOW level requirements| Category |
|-|------------------------| ------- |
|1|All LEDs should turn ON when switch flicked once|Technical|
|2|All LEDs should turn OFF when switch flicked twice|Technical|
|3|All LEDs should turn ON in clockwise manner when switch flicked thrice|Technical|
|4|All LEDs should turn ON in anticlockwise manner when switch flicked 4 times|Technical|

## Swot analysis
|Strength|Weakness|Opportunites|Threats|
|--------|--------|------------|-------|
|Easily Accesible|Delay between the commands|As now everything is being digitalized and market needs more of automation|Before moving on to the next task, the user should always ensure that the current one is done.|
|Limited human interaction|Low cost|System dependent if something goes wrong in system it may effect user|

## 5W & 1H
   * Who   : Who wants to control the actions/Status of car remotely.
   * What  : Communication between the car and the remote.
   * Where : Inside or outside the car.
   * When  : User wants to know the status of the car.
   * Why   : To know the status of the car remotely.
   * How   : By pressing the button


