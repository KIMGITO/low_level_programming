#include"main.h"
#include<stdio.h>
/**
 * cap_string - see program
 * @s:pointer to string
 * Return: string
 */
char *cap_string(char *s)
{
	int x, y;
	char dels[] = " \t\n,;.!?\"(){}";

	for (x = 0; s[x] != '\0'; x++)
	{
		x++;
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
			for (y = 0; dels[y] != '\0'; y++)
			{
				if (s[x] == dels[y] && s[x + 1] >= 97 && s[x + 1] <= 122)
				{
					s[x + 1] = s[x + 1] -32;
				}
			}
		}
	}
	return (s);
}
