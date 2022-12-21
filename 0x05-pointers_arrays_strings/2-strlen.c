#include"main.h"
/**
 * _strlen - str
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
