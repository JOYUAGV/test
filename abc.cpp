#include "stm32f10x.h"
#include "mymath.h"

int main(void)
{
	usart_init(115200);
	delay_init();

	float a = 3.14;
	int b = -12;
	while(1)
	{
		delay_ms(20);//@50Hz
		printf("hello github!\n");
		float a_abs = abs(a);
		float b_abs = abs(b);
		printf("the abs of a and b is:%f\t%d\n", a_abs, b_abs);
	}
	
	return 0;
}
