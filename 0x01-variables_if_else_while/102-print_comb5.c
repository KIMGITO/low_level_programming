#include<stdio.h>
/**
 * main - entray
 *
 * Return: zero
 */
int main(void)
{
	int a, b, x, y;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (x = 48; x <= 57; x++)
			{
				for (y = 48; y <= 57; y++)
				{
					if ((a >= x && b >= y) || (x < a))
					{
					}
					else
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(x);
						putchar(y);
						if (!(a == 57 && b == 56 && x == 57 && y == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
					if (a == 57 && b == 56 && x == 57 && y == 57)
					{
						break;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
