#include"main.h"
/**
 * _sqrt_recursion - find sqtr of a number
 * @n: the number
 * Return: error or the sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - return the natural sqrt
 * @n: number to find sqrt
 * @x: thr sqrt
 * Return: sqrt
 */
int _sqrt(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (_sqrt(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
