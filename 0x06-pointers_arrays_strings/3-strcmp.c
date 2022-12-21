#include"main.h"
/**
 * _strcmp - compare strings
 * @s1:pointer to str one
 * @s2:pointer to string two
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
