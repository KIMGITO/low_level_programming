#include"main.h"
/**
 * is_prime_number - checks if the number input is prime number
 * @n:test number
 * Return: prime number? 1: 0
 */
int is_prime_number(int n)
{
	if (n < 2 || (!(n % 2) && n != 2))
	{
		return (0);
	}
	else
	{
		return (div(3, n));
	}
}

/**
 * div - divide to see if its a prime number
 * @n:integer
 * @m:integer
 * Return:true or false
 */
int div(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (div(n + 2, m));
	}
	else
	{
		return (1);
	}
}
