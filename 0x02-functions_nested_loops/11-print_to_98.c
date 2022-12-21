#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - see the program
 *@a:starting point for printing to 98
 *return: alwys zero
 */
void print_to_98(int a)
{
	if (a < 98)
	{
		for (a = a; a < 98; a++)
		{
			printf("%d, ", a);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (a = a; a > 98; a--)
		{
			printf("%d, ", a);
		}
		printf("%d\n", 98);
	}
}
