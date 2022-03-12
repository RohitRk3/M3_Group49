#include "MyStm32f407xx.h"

#define Buttonpressed ENABLE
#define HIGH          1
#define LOW           0

int count = 0;

void lock(int);
void antilock(int);
void activation_deactivation(int);
void approach_light(int);

void delay(){
    for(int i=0; i<6000000; i++);
}

void main(){
    //LED Initialization
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Handle_t GpioLED1;
    GpioLED1.pGPIOx = GPIOD;
    GpioLED1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
    GpioLED1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED1);

    GPIO_Handle_t GpioLED2;
    GpioLED2.pGPIOx = GPIOD;
    GpioLED2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
    GpioLED2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED2);

    GPIO_Handle_t GpioLED3;
    GpioLED3.pGPIOx = GPIOD;
    GpioLED3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
    GpioLED3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED3);

    GPIO_Handle_t GpioLED4;
    GpioLED4.pGPIOx = GPIOD;
    GpioLED4.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
    GpioLED4.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED4.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED4.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED4);

    //Push Button Initialization
    GPIO_Handle_t Gpiobtn;
    Gpiobtn.pGPIOx = GPIOA;
    Gpiobtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
    Gpiobtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
    Gpiobtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    Gpiobtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_Init(&Gpiobtn);

    while(1){
    if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == Buttonpressed)
    {
        delay();
        count += 1;
    }

    if (count == 1){
        delay();
        lock(count - 1);
    }

    if (count == 5){
        delay();
        antilock(count - 1);
    }

    if (count == 10){
        delay();
        activation_deactivation(count - 1);
    }

    if (count == 13){
        delay();
        approach_light(count - 1);
    }

    }


}

void lock(int nums){
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, HIGH);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, HIGH);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, HIGH);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, HIGH);
}

void antilock(int nums){
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, LOW);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, LOW);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, LOW);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, LOW);
}

void activation_deactivation(int nums){
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
    delay();
    delay();
}

void approach_light(int nums){
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
    delay();
    delay();
}
