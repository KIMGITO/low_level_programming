#include"main.h"
/**
 * print_numbers - from 0 to 9
 *
 * Return:0
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
