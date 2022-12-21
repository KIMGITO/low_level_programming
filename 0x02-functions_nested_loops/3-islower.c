#include"main.h"
/**
 * _islower - starting point
 * @c:has the value for comparison
 * Return: 1 for lowercase 0 for  not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
