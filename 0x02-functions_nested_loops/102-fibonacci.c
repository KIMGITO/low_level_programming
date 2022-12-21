#include<stdio.h>
/**
 * main - see program
 *
 * Return:zero
 */
int main(void)
{
	int i;
	unsigned long sum = 1, x, y;

	for (i = 0; i < 50; i++)
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
		if (i != 49)
		{
		printf("%lu, ", sum);
		}
		else
		{
			printf("%lu", sum);
		}
	}
	printf("\n");
	return (0);
}
