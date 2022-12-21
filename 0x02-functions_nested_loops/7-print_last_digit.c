#include"main.h"
/**
 * print_last_digit - start your program
 *@num: the number to check last digit from
 * Return: alwys zero;
 */
int print_last_digit(int num)
{
	int l_digit;

	if (num < 0)
	{
		l_digit = (-1 * (num % 10));
		_putchar('0' + l_digit);
		return (l_digit);
	}
	else
	{
		l_digit = num % 10;
		_putchar('0' + l_digit);
		return (l_digit);
	}
}
