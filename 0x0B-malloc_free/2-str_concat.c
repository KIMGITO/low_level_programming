#include "main.h"
/**
 * str_concat - joines two string together in a block of storage
 * @s1:pointer to string one
 * @s2:pointer to string two
 * Return:success?joined string:null
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *dpstr;
	int sz1, sz2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sz1 = strlen(s1);
	sz2 = strlen(s2);
	dpstr = malloc(sizeof(char) * (sz1 + sz2) + 1);
	if (dpstr == NULL)
		return (0);
	for (i = 0; i < sz1 + sz2; i++)
	{
		dpstr[i] = i < sz1 ? s1[i] : s2[i - sz1];
	}
	return (dpstr);
	return (0);
}

