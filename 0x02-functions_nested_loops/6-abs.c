#include"main.h"
#include<stdio.h>
/**
 * _abs-start the program
 * @n: the value for checking absolute
 * Return: 0 or number sign changed
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
