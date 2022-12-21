#include"main.h"
/**
 * _memset - fill bite
 * @s:string
 * @b:filler
 * @n:size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
