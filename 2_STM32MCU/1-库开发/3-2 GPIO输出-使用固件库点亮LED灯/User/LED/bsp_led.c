// bsp :board support package �弶֧�ְ�

#include "bsp_led.h"


void LED_GPIO_Config(void)
{
	/* �����ĸ������ʺ���������ĳ�ʼ�� */
	
	/* ��һ������GPIO��ʱ�� */
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
	
	/* �ڶ���������һ��GPIO��ʼ���ṹ�� */
	GPIO_InitTypeDef GPIO_InitStruct_RED;
	GPIO_InitTypeDef GPIO_InitStruct_GREEN;
	GPIO_InitTypeDef GPIO_InitStruct_BLUE;
	
  /* ������������GPIO��ʼ���ṹ��ĳ�Ա */
	// Red LED
	GPIO_InitStruct_RED.GPIO_Pin = GPIO_Pin_6;
	GPIO_InitStruct_RED.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStruct_RED.GPIO_OType = GPIO_OType_PP;	
	GPIO_InitStruct_RED.GPIO_Speed = GPIO_Low_Speed;
	GPIO_InitStruct_RED.GPIO_PuPd = GPIO_PuPd_UP;	
	// Green LED
	GPIO_InitStruct_GREEN.GPIO_Pin = GPIO_Pin_7;
	GPIO_InitStruct_GREEN.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStruct_GREEN.GPIO_OType = GPIO_OType_PP;	
	GPIO_InitStruct_GREEN.GPIO_Speed = GPIO_Low_Speed;
	GPIO_InitStruct_GREEN.GPIO_PuPd = GPIO_PuPd_UP;	
	// Blue LED
	GPIO_InitStruct_BLUE.GPIO_Pin = GPIO_Pin_8;
	GPIO_InitStruct_BLUE.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStruct_BLUE.GPIO_OType = GPIO_OType_PP;	
	GPIO_InitStruct_BLUE.GPIO_Speed = GPIO_Low_Speed;
	GPIO_InitStruct_BLUE.GPIO_PuPd = GPIO_PuPd_UP;
	
	/* ���Ĳ�������GPIO��ʼ�������������úõĽṹ��ĳ�Ա�Ĳ���д��Ĵ��� */
	GPIO_Init(GPIOF, &GPIO_InitStruct_RED);	
	GPIO_Init(GPIOF, &GPIO_InitStruct_GREEN);	
	GPIO_Init(GPIOF, &GPIO_InitStruct_BLUE);	
	
	GPIO_ResetBits(GPIOF,GPIO_Pin_6);
	GPIO_ResetBits(GPIOF,GPIO_Pin_7);
	GPIO_ResetBits(GPIOF,GPIO_Pin_8);
}


