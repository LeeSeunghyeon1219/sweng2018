#include "func2.h"
#include "func1.h"
#include <stdio.h>
void turbo_on()
{
	printf("turbo on!\n");
}
void turbo_off()
{
	printf("turbo off!\n");
}
int main(void)
{
	func1();
	func2();
	turbo_on();
	turbo_off();
}
