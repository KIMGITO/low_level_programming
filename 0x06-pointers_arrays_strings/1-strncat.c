#include"main.h"
/**
 * _strncat - concating two strings
 * @dest:final string
 * @src:string 1
 * @n:size
 * Return:string
 */
char *_strncat(char *dest, char *src, int n);
{
	int i = 0, j = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}
	for (i = 0; src[i] !== '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
