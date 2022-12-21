#include "main.h"
/**
 * create_array - create array initialized to a given char
 * @size:size the character
 * @c:character to be used
 * Return:(size <= 0)?NULL:array pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size < 1 || arr == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	*(arr + i) = '\0';
	return (arr);
}
