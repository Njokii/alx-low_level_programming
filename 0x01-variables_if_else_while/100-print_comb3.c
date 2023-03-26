#include <stdio.h>

/**
  *main - entry point
  *printing combinations of teo digits
  *no i=j
  *
  *Return: Always 0- successs
  */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = (i + 1); j < (57 + 1); j++)
		{
			if (j == i)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
