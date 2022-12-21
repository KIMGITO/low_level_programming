#include"main.h"
/**
 * rev_string - string reversed
 * @s: the pointer to string
 * Return:zero
 */
void rev_string(char *s)
{
	char *start, *end, c;
	int leng, i, count;

	leng = 0;
	for (i = 0; s[i]; i++)
	{
		leng++;
	}
	count = leng;
	start = s;
	end = s;
	for (i = 0; i < count - 1; i++)
	{
		end++;
	}
	for (i = 0; i < count / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;
		start++;
		end--;
	}
}
