#include"main.h"
/**
 * puts_half - print other half of the string
 * @str:pointer to a string
 * Return:zero
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	i = (i + 1) / 2;
	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
