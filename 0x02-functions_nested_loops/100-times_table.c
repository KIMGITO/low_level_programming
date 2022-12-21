#include"main.h"
/**
 * print_times_table - see the program
 * @n: the length of your table
 * Return: zero
 */
void print_times_table(int n)
{
	int i, j = n, res;

	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0;  j <= n; j++)
			{
				res = i * j;
				if ((res == 0) && (j == 0))
				{
					_putchar('0' + res);
				}
				else if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
