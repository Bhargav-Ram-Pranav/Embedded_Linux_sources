#include<stdio.h>
// Declare the function pointer using extern
extern void (*fp)();
int main()
{
	fp();
}
