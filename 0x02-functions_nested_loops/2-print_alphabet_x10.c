#include"main.h"
/**
 * print_alphabet_x10 - starting point of the program
 *
 * Return:zero
 */
void print_alphabet_x10(void)
{
	int a;
	char j;

	for (a = 0; a < 10; a++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
