#include "MyStm32f407xx.h"

#define BUTTON ENABLE




void delay(void)
{
	for (uint32_t i=0; i < 500000; i++);
}
void delay_ms(uint32_t time) //Delay in ms
{
	uint32_t i=0;
   while(time--)
   {
      i=12000;  // Define your own
      while(i--) ;
   }
int encrypt(int count)
{
	if(count==1)
		return 123;
	else if(count==2)
		return 234;
	else if(count==3)
		return 345;
	else if(count==4)
		return 456;
}

/**
 * Function for lock
 */
void print_lock(void){
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
}
/**
 * Function for unlock
 */
void print_unlock(void){
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);
}
/**
 * Function for glowing led in clockwise direction
 */
void Clockwise(void){
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
	delay_ms(10000);
}
/**
 * Function for glowing led in anti-clockwise direction
 */
void Anticlockwise(void){
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
	delay_ms(10000);
}

int main(void)
{

	GPIO_Handle_t GpioLeds, GpioBtn;
	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE); //Enable peripheral lock
	GPIO_Init(&GpioLeds);


	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioLeds);

	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioLeds);

	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioLeds);

	GpioBtn.pGPIOx = GPIOA;
	GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;//Configure the mode of GPIO pins
	GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioBtn.GPIO_PinConfig.GPIO_PinOPType = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioBtn);

	uint8_t C=0;//set a count
	uint32_t T = 12000*5000;//input time 5 second for user


	while(1)//main loop
	{
		if(T!=0){
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);//Input phase
		}



		 while(T!=0)
		 {
			 if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BUTTON)
			 {
			 				count+=1;
			 				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
			 				delay_ms(20000);//button press delay and indication for not give input currently
			 				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
			 }

			 T-=1;
			 continue;
		 }

		 if(T==0){
		 			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
		 }

        int enc=encrypt(C);
		if(enc==123){
			print_lock();
		}
		else if(enc==234){
			unlock();
		}
		else if(enc==345){
			print_alarm();
		}
		else if(enc==456){
			Clockwise();
		}

		delay_ms(30000);
		Anticlockwise();
		T = 12000*5000;
		C=0;

	}

}}