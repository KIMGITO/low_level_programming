#include"main.h"
/**
 * reverse_array - see program
 * @a:pointer
 * @n:pointer
 * Return:number
 */
void reverse_array(int *a, int n)
{
	int x = 0, y = n - 1, tmp;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
