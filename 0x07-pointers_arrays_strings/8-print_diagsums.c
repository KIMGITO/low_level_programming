#include<stdio.h>
#include"main.h"
/**
 * print_diagsums - sum of matrix diagonal
 * @a:sum
 * @size: of array
 * Return: zero
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i, x;

	for (i = 0; i < size; i++)
	{
		x = (i * size) + i;
		sum_1 += a[x];
	}
	for (i = 1; i <= size; i++)
	{
		x = (i * size) - i;
		sum_2 += a[x];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
