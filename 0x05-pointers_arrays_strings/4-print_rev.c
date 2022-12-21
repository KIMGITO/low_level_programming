#include"main.h"
/**
 * print_rev - string to reverse
 * @s: pointer to the string
 * Return: 0
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (n = n - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
