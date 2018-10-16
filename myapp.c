#include "func2.h"
#include "func1.h"
#include <stdio.h>

void sss()
{
	pirntf("My name is Seunghyeon\n");
}
void fff()
{
	printf("It's too fast!\n");
}

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
	sss();
	turbo_on();
	func1();
	func2();
	fff();
	turbo_off();
}
