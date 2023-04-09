#include "main.h"

/**
  *print_diagonal- prints diagonal lines with space right before
  *@n: number of lines to print
  *
  *return: void
  */

void print_diagonal(int n)
{
	int m, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		j = 0;
		while (j < n)
		{
			m = 0;
			while (m < n)
			{
				if (m == j)
				{
					m++;
					_putchar(92);
					break;
				}
				else
				{
					m++;
					_putchar(' ');
					continue;
				}
			}
			_putchar('\n');
			j++;
		}
	}
}
