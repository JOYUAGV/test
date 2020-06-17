#include "stm32f10x.h"

int main(void)
{
	usart_init(115200);
	delay_init();

	while(1)
	{
		delay_ms(20);//@50Hz
		printf("hello github!\n");
	}
	
	return 0;
}
