#include"main.h"
/**
 * _strchr - locate character in a string
 * @s:string
 * @c:dest cahr
 * Return:s
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
