#include"main.h"
/**
 * _strcpy - copay string to another string
 * @dest:pointer string to be changed
 * @src:pointer to source string
 * Return:string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
