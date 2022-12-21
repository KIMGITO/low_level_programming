#include"main.h"
/**
 * _strlen_recursion - see the programe
 * @s:string
 * Return: recursed
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
