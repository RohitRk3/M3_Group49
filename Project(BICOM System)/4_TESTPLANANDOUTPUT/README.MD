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
|LLT4|Approach the light|Button is pressed four times|All the LED's blink in anticlockwise direction|Pass|
