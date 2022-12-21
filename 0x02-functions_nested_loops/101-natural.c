#include<stdio.h>
/**
 * main - see the program
 *
 * Return: alwys zero
 */
int main(void)
{
	int x, sum = 0;

	for (x = 3; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
