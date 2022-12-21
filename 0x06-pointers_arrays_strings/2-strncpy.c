#include "main.h"
/**
 * _strncpy - words
 * @dest:pointer
 * @src:pointer
 * @n:int
 * Return:string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	for (j = j; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
