#include "main.h"
/**
 * _strdup - create new space to contain a copy of str
 * @str:parameter str to copy from
 * Return:success?pointer to str:NULL
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *dpstr;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		size = strlen(str);
		dpstr = malloc(sizeof(char) * size + 1);
		if (dpstr == NULL)
			return (0);
		for (i = 0; i < size; i++)
		{
			dpstr[i] = str[i];
		}
		dpstr[i + 1] = '\0';
		return (dpstr);
	}
	return (0);
}
