# include "MyStm32f407xx.h"
# define BUTTON_PRESSED ENABLE

void delay(void)
{
	for (uint32_t i=0; i<500000; i++);
}

int main(void)
{

		int Btn_Prs=0;

		GPIO_Handle_t GPIOBTN,GPIO_LED_12,GPIO_LED_13,GPIO_LED_14,GPIO_LED_15; //structure variables of type GPIO_Handle_t

		GPIOBTN.pGPIOx = GPIOA; //GPIO BANK  A REGISTER
		GPIOBTN.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
		GPIOBTN.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN; //Input mode
		GPIOBTN.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GPIOBTN.GPIO_PinConfig.GPIO_PinOPType = GPIO_NO_PUPD;
		GPIO_PeriClockControl(GPIOA, ENABLE);
		GPIO_Init(&GPIOBTN);


		GPIO_LED_12.pGPIOx = GPIOD; //GPIO BANK  D REGISTER
		GPIO_LED_12.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
		GPIO_LED_12.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT; //Output mode
		GPIO_LED_12.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GPIO_LED_12.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&GPIO_LED_12);


		GPIO_LED_13.pGPIOx = GPIOD; //GPIO BANK  D REGISTER
		GPIO_LED_13.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
		GPIO_LED_13.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT; //Output mode
		GPIO_LED_13.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GPIO_LED_13.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&GPIO_LED_13);


		GPIO_LED_14.pGPIOx = GPIOD; //GPIO BANK  D REGISTER
		GPIO_LED_14.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
		GPIO_LED_14.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT; //Output mode
		GPIO_LED_14.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GPIO_LED_14.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&GPIO_LED_14);


		GPIO_LED_15.pGPIOx = GPIOD; //GPIO BANK  D REGISTER
		GPIO_LED_15.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
		GPIO_LED_15.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT; //Output mode
		GPIO_LED_15.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GPIO_LED_15.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&GPIO_LED_15);

	while(1)
		{

		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BUTTON_PRESSED) //if button = 1
		{
				Btn_Prs++;
		}
		if(Btn_Prs == 1)  // all led on- locks the car if pressed 1 time
			{

				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 1);
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 1);
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 1);
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 1);
			}

		if(Btn_Prs == 2) //all led off- unlocks the car if pressed 2 times
			{

				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
			}

		if(Btn_Prs==3) //clockwise blink- alarm activation or deactivation
			{

				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				delay();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
				delay();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				delay();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
				delay();
			}

		if(Btn_Prs==4) //anticlockwise blink-approach light
			{
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				delay();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
				delay();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				delay();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
				delay();
			}
		}

}
