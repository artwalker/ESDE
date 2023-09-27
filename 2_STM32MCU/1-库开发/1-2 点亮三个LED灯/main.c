#include "stm32f4xx.h"

#if 0
#include <reg51.h>

void main(void)
{
	 PA0 = 0XFE;
	 while(1);
}
#endif


void Delay(unsigned int count)
{
	for(; count!=0; count--);
}

int main(void)
{
	
#if 0
	/* 第一步：开启GPIO端口的时钟 */
	/* 打开GPIOF端口的时钟 */
	*( unsigned int *)(0x40023800+0x30) |= ( 1<<5 );
	
	
	/* 第二步：控制GPIO的方向 */
	/* GPIOF 配置为输出 */
	*( unsigned int *)(0x40021400+0x00) &=~ ( (0x03) << (2*6) );
	*( unsigned int *)(0x40021400+0x00) |= ( 1 << (2*6) );
	
	/* 第一步：控制GPIO的数据输出寄存器 */	
	/* PF6 输出高电平 */
	*( unsigned int *)(0x40021400+0x14) |= (1<<6);	
	/* PF6 输出低电平 */
	*( unsigned int *)(0x40021400+0x14) &= ~(1<<6);	
	
#elif 0	
	
	
	/* 第一步：开启GPIO端口的时钟 */
	/* 打开GPIOF端口的时钟 */
	RCC_AHB1ENR |= ( 1<<5 );
	
	
	/* 第二步：控制GPIO的方向 */
	/* GPIOF 配置为输出 */
	GPIOF_MODER &=~ ( (0x03) << (2*6) );
	GPIOF_MODER |= ( 1 << (2*6) );
	
	/* 第三步：控制GPIO的数据输出寄存器 */	
	/* PF6 输出高电平 */
	GPIOF_ODR |= (1<<6);	
	/* PF6 输出低电平 */
	GPIOF_ODR &= ~(1<<6);	
	
#elif 0  /* 作业讲解 */	
	
		/* 第一步：开启GPIO端口的时钟 */
	/* 打开GPIOF端口的时钟 */
	RCC_AHB1ENR |= ( 1<<5 );
	
	
	/* 第二步：控制GPIO的方向 */
	/* GPIOF 配置为输出 */
	GPIOF_MODER &=~ ( (0x03) << (2*6) );
	GPIOF_MODER |= ( 1 << (2*6) );
	
	GPIOF_MODER &=~ ( (0x03) << (2*7) );
	GPIOF_MODER |= ( 1 << (2*7) );
	
	GPIOF_MODER &=~ ( (0x03) << (2*8) );
	GPIOF_MODER |= ( 1 << (2*8) );
	
	/* 第三步：控制GPIO的数据输出寄存器 */	
	/* PF6 输出高电平 */
	GPIOF_ODR |= (1<<6);	
	/* PF6 输出低电平 */
	//GPIOF_ODR &= ~(1<<6);
	
	/* PF7 输出高电平 */
	GPIOF_ODR |= (1<<7);	
	/* PF6 输出低电平 */
	//GPIOF_ODR &= ~(1<<7);
	
	/* PF8 输出高电平 */
	//GPIOF_ODR |= (1<<8);	
	/* PF6 输出低电平 */
	GPIOF_ODR &= ~(1<<8);
	
#elif 1  /* 作业讲解 */	

	/* 第一步：开启GPIO端口的时钟 */
	/* 打开GPIOF端口的时钟 */
	RCC_AHB1ENR |= ( 1<<5 );


	/* 第二步：控制GPIO的方向 */
	/* GPIOF 配置为输出 */
	GPIOF_MODER &=~ ( (0x03) << (2*6) );
	GPIOF_MODER |= ( 1 << (2*6) );

	GPIOF_MODER &=~ ( (0x03) << (2*7) );
	GPIOF_MODER |= ( 1 << (2*7) );

	GPIOF_MODER &=~ ( (0x03) << (2*8) );
	GPIOF_MODER |= ( 1 << (2*8) );

//	/* 第三步：控制GPIO的数据输出寄存器 */	
	/* PF6 输出高电平 */
	GPIOF_ODR |= (1<<6);	
	/* PF6 输出低电平 */
	//GPIOF_ODR &= ~(1<<6);

	/* PF7 输出高电平 */
	GPIOF_ODR |= (1<<7);	
	/* PF6 输出低电平 */
	//GPIOF_ODR &= ~(1<<7);

	/* PF8 输出高电平 */
	GPIOF_ODR |= (1<<8);	
	/* PF6 输出低电平 */
	//GPIOF_ODR &= ~(1<<8);
	
	while(1)
 {	 
	 GPIOF_ODR &= ~(1<<6);
	 Delay(0x0fffff);
	 GPIOF_ODR |= (1<<6);
	 Delay(0x0fffff);
	 
	 
	 GPIOF_ODR &= ~(1<<7);
	 Delay(0x0fffff);
	 GPIOF_ODR |= (1<<7);
	 Delay(0x0fffff);
	 
	 GPIOF_ODR &= ~(1<<8);
	 Delay(0x0fffff);
	 GPIOF_ODR |= (1<<8);
	 Delay(0x0fffff);
 }

#endif 
}

void SystemInit(void)
{
	/* 函数体为空，目的是为了骗过编译器不报错 */
}

















