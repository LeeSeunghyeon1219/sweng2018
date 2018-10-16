#include "func2.h"
#include "func1.h"
#include <stdio.h>
void fff()
{
	printf("It's too fast!\n");
}
int main(void)
{
	fff();
	func1();
	func2();
}
