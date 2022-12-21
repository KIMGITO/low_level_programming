#include<stdio.h>
/**
 * main - see program
 *
 * Return:zero
 */
int main(void)
{
	int i = 0;
	unsigned long sum = 1, x, y, tt;

	while (sum <= 4000000)
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
		i++;
		if (sum % 2 == 0)
		{
			tt = tt + sum;
		}
	}
	printf("%lu\n", tt);
	return (0);
}
