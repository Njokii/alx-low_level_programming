#include <stdio.h>

/**
  *main - entry point.
  *printing two two digit numbers
  *
  *Return: Always 0
  */

int main(void)
{
	int i, j, k, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
			putchar(i);
			putchar(i);
			putchar(' ');
			putchar(j);
			putchar(j);
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
