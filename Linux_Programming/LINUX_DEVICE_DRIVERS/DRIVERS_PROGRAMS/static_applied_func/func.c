#include<stdio.h>
static void hello();
void (*fp)()=hello;
static void hello()
{
	printf("Hello i am invoked\n");
}

