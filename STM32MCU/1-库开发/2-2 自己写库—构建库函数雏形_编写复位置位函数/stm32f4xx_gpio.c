#include "stm32f4xx_gpio.h"

void GPIO_SetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	//Reset重置给1后，IO端口输出0
	GPIOx->BSRRL = GPIO_Pin;
}

void GPIO_ResetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	//set重置给1后，IO端口输出1
	GPIOx->BSRRH = GPIO_Pin;
}

