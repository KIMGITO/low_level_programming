#include<stdio.h>
/**
 * main - see code
 *
 * Return: zero
 */
int main(void)
{
	int i;
	unsigned long sum =1, tt, x, y;

	for (sum = 1; sum <= 4000000; i++)
	{
		if (i % 2 == 0)
		{
			x = sum;
		}
		else
		{
			y = sum;
		}
		sum = x + y;
		if (sum <= 4000000)
		{
			if (sum % 2 == 0)
			{
				tt = tt + sum;
			}
		}
	}
	printf("%lu\n tt);
	return (0);
}
