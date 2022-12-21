#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - generate radom num
 *
 * Return: 0
 */
int main(void)
{
	int i, j, sum = 0,pas[100];

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pas[i] = rand() % 78;
		sum += (pas[i] + '0');
		putchar(pas[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum -'0';
			sum += j;
			putchar (j + '0');
			break;
		}
	}
	return (0);
}
