#include"main.h"
/**
 * _puts - see program
 * @str: pointer to the string
 * Return: 0
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		_putchar (str[x]);
	}
	_putchar('\n');
}
