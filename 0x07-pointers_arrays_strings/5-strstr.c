#include"main.h"
/**
 * _strstr - locate sub str
 * @haystack: pointer to char
 * @needle:pointer too
 * Return: 0;
 */
char *_strstr(char *haystack, char *needle)
{
	char *r = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (r);
		}
		needle = fneedle;
		r++;
		haystack = r;
	}
	return (0);
}
