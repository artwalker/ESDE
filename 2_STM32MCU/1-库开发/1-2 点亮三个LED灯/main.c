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
	/* ��һ��������GPIO�˿ڵ�ʱ�� */
	/* ��GPIOF�˿ڵ�ʱ�� */
	*( unsigned int *)(0x40023800+0x30) |= ( 1<<5 );
	
	
	/* �ڶ���������GPIO�ķ��� */
	/* GPIOF ����Ϊ��� */
	*( unsigned int *)(0x40021400+0x00) &=~ ( (0x03) << (2*6) );
	*( unsigned int *)(0x40021400+0x00) |= ( 1 << (2*6) );
	
	/* ��һ��������GPIO����������Ĵ��� */	
	/* PF6 ����ߵ�ƽ */
	*( unsigned int *)(0x40021400+0x14) |= (1<<6);	
	/* PF6 ����͵�ƽ */
	*( unsigned int *)(0x40021400+0x14) &= ~(1<<6);	
	
#elif 0	
	
	
	/* ��һ��������GPIO�˿ڵ�ʱ�� */
	/* ��GPIOF�˿ڵ�ʱ�� */
	RCC_AHB1ENR |= ( 1<<5 );
	
	
	/* �ڶ���������GPIO�ķ��� */
	/* GPIOF ����Ϊ��� */
	GPIOF_MODER &=~ ( (0x03) << (2*6) );
	GPIOF_MODER |= ( 1 << (2*6) );
	
	/* ������������GPIO����������Ĵ��� */	
	/* PF6 ����ߵ�ƽ */
	GPIOF_ODR |= (1<<6);	
	/* PF6 ����͵�ƽ */
	GPIOF_ODR &= ~(1<<6);	
	
#elif 0  /* ��ҵ���� */	
	
		/* ��һ��������GPIO�˿ڵ�ʱ�� */
	/* ��GPIOF�˿ڵ�ʱ�� */
	RCC_AHB1ENR |= ( 1<<5 );
	
	
	/* �ڶ���������GPIO�ķ��� */
	/* GPIOF ����Ϊ��� */
	GPIOF_MODER &=~ ( (0x03) << (2*6) );
	GPIOF_MODER |= ( 1 << (2*6) );
	
	GPIOF_MODER &=~ ( (0x03) << (2*7) );
	GPIOF_MODER |= ( 1 << (2*7) );
	
	GPIOF_MODER &=~ ( (0x03) << (2*8) );
	GPIOF_MODER |= ( 1 << (2*8) );
	
	/* ������������GPIO����������Ĵ��� */	
	/* PF6 ����ߵ�ƽ */
	GPIOF_ODR |= (1<<6);	
	/* PF6 ����͵�ƽ */
	//GPIOF_ODR &= ~(1<<6);
	
	/* PF7 ����ߵ�ƽ */
	GPIOF_ODR |= (1<<7);	
	/* PF6 ����͵�ƽ */
	//GPIOF_ODR &= ~(1<<7);
	
	/* PF8 ����ߵ�ƽ */
	//GPIOF_ODR |= (1<<8);	
	/* PF6 ����͵�ƽ */
	GPIOF_ODR &= ~(1<<8);
	
#elif 1  /* ��ҵ���� */	

	/* ��һ��������GPIO�˿ڵ�ʱ�� */
	/* ��GPIOF�˿ڵ�ʱ�� */
	RCC_AHB1ENR |= ( 1<<5 );


	/* �ڶ���������GPIO�ķ��� */
	/* GPIOF ����Ϊ��� */
	GPIOF_MODER &=~ ( (0x03) << (2*6) );
	GPIOF_MODER |= ( 1 << (2*6) );

	GPIOF_MODER &=~ ( (0x03) << (2*7) );
	GPIOF_MODER |= ( 1 << (2*7) );

	GPIOF_MODER &=~ ( (0x03) << (2*8) );
	GPIOF_MODER |= ( 1 << (2*8) );

//	/* ������������GPIO����������Ĵ��� */	
	/* PF6 ����ߵ�ƽ */
	GPIOF_ODR |= (1<<6);	
	/* PF6 ����͵�ƽ */
	//GPIOF_ODR &= ~(1<<6);

	/* PF7 ����ߵ�ƽ */
	GPIOF_ODR |= (1<<7);	
	/* PF6 ����͵�ƽ */
	//GPIOF_ODR &= ~(1<<7);

	/* PF8 ����ߵ�ƽ */
	GPIOF_ODR |= (1<<8);	
	/* PF6 ����͵�ƽ */
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
	/* ������Ϊ�գ�Ŀ����Ϊ��ƭ�������������� */
}

















