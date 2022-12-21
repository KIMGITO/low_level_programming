#include<stdio.h>
int main(void)
{
	int x, k = 0;

	void sep()
	{
		putchar(',');
		putchar(' ');
	}
	void print(int x)
	{
		if (x != 0)
		{
			print(x / 10);
			putchar((x % 10) + '0');
			sep();
		}
	}
	for (x = 1; x < 100; x++)
	{
		if (x < 10)
		{
			putchar('0');
			print(x);
			sep();
			continue;
		}
		else
		{
			if (x % 10 == 0)
			{
				k++;
			}
			if (x % 10 >= 0 && x % 10 <= k)
			{
				continue;
			}
			else
			{
				print(x);
			}
		}
	}
	return (0);
}
