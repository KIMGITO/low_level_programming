#include"main.h"
/**
 * _isalpha - starting point of this program
 * it functions to test for alphabets
 * @c:containes the value to check
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
