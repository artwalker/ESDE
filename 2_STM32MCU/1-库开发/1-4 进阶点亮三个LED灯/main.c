
/*
	ʹ�üĴ����ķ�������LED��
  */
#include "stm32f4xx.h" 


/**
  *   ������
  */
int main(void)
{	
	/*���� GPIOF ʱ�ӣ�ʹ������ʱ��Ҫ�ȿ�������ʱ��*/
	RCC_AHB1ENR |= (1<<5);	
	
	/* LED �˿ڳ�ʼ�� */
	
	/*GPIOF MODER6���*/
	GPIOF_MODER  &= ~( 0x03<< (2*6));	
	/*PF6 MODER6 = 01b ���ģʽ*/
	GPIOF_MODER |= (1<<2*6);
	
	/*GPIOF OTYPER6���*/
	GPIOF_OTYPER &= ~(1<<1*6);
	/*PF6 OTYPER6 = 0b ����ģʽ*/
	GPIOF_OTYPER |= (0<<1*6);
	
	/*GPIOF OSPEEDR6���*/
	GPIOF_OSPEEDR &= ~(0x03<<2*6);
	/*PF6 OSPEEDR6 = 0b ����2MHz*/
	GPIOF_OSPEEDR |= (0<<2*6);
	
	/*GPIOF PUPDR6���*/
	GPIOF_PUPDR &= ~(0x03<<2*6);
	/*PF6 PUPDR6 = 01b ����ģʽ*/
	GPIOF_PUPDR |= (1<<2*6);
	
	/*PF6 BSRR�Ĵ����� BR6��1��ʹ��������͵�ƽ*/
	GPIOF_BSRR |= (1<<16<<6);
	
	/*PF6 BSRR�Ĵ����� BS6��1��ʹ��������ߵ�ƽ*/
	//GPIOF_BSRR |= (1<<6);

	/*GPIOF MODER7���*/
	GPIOF_MODER  &= ~( 0x03<< (2*7));	
	/*PF7 MODER7 = 01b ���ģʽ*/
	GPIOF_MODER |= (1<<2*7);
	
	/*GPIOF OTYPER7���*/
	GPIOF_OTYPER &= ~(1<<1*7);
	/*PF7 OTYPER7 = 0b ����ģʽ*/
	GPIOF_OTYPER |= (0<<1*7);
	
	/*GPIOF OSPEEDR7���*/
	GPIOF_OSPEEDR &= ~(0x03<<2*7);
	/*PF7 OSPEEDR7 = 0b ����2MHz*/
	GPIOF_OSPEEDR |= (0<<2*7);
	
	/*GPIOF PUPDR7���*/
	GPIOF_PUPDR &= ~(0x03<<2*7);
	/*PF7 PUPDR7 = 01b ����ģʽ*/
	GPIOF_PUPDR |= (1<<2*7);
	
	/*PF7 BSRR�Ĵ����� BR7��1��ʹ��������͵�ƽ*/
	GPIOF_BSRR |= (1<<16<<7);
	
	/*GPIOF MODER8���*/
	GPIOF_MODER  &= ~( 0x03<< (2*8));	
	/*PF8 MODER8 = 01b ���ģʽ*/
	GPIOF_MODER |= (1<<2*8);
	
	/*GPIOF OTYPER8���*/
	GPIOF_OTYPER &= ~(1<<1*8);
	/*PF8 OTYPER8 = 0b ����ģʽ*/
	GPIOF_OTYPER |= (0<<1*8);
	
	/*GPIOF OSPEEDR8���*/
	GPIOF_OSPEEDR &= ~(0x03<<2*8);
	/*PF7 OSPEEDR8 = 0b ����2MHz*/
	GPIOF_OSPEEDR |= (0<<2*8);
	
	/*GPIOF PUPDR8���*/
	GPIOF_PUPDR &= ~(0x03<<2*8);
	/*PF8 PUPDR8 = 01b ����ģʽ*/
	GPIOF_PUPDR |= (1<<2*8);
	
	/*PF8 BSRR�Ĵ����� BR7��1��ʹ��������͵�ƽ*/
	GPIOF_BSRR |= (1<<16<<8);
	while(1);

}

// ����Ϊ�գ�Ŀ����Ϊ��ƭ��������������
void SystemInit(void)
{	
}






/*********************************************END OF FILE**********************/

