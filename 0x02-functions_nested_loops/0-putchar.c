#include<stdio.h>
#include"main.h"
/**
 * main-entry point
 *
 * Return:zero
 */
int main(void)
{
	message();
	return (0);
}

/**
 * message - printing function
 * Return:void
 */
void message(void)
{
	int a;
	char sms[8] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		putchar(sms[a]);
	}
	putchar('\n');
}
