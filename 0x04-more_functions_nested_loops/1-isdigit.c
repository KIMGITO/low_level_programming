#include"main.h"
/**
 * _isdigit - look for a digit
 * @c:the number to check
 * Return:0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
