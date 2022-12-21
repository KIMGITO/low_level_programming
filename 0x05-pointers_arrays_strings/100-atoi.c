#include"main.h"
/**
 * is_numerical - checks for digit
 * @n:  the number
 * Return: if number 1 else 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}
/**
 * _atoi - converting to int
 * @s: string pointer
 * Return: number
 */
int _atoi(char *s)
{

	unsigned int num, i;
	int sign;

	sign = 1;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			num = (s[i] - 48) + num * 10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	return (num * sign);
}
