#include"main.h"
/**
 * swap_int - swaping
 * @a: value for first number
 * @b: value for second number
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
