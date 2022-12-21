#include"main.h"
/**
 * _strcat - adding two strings
 * @dest:second string and the final string
 * @src:the string to be submerged
 * Return:a string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
