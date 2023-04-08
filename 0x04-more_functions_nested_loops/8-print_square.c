#include "main.h"

/**
  *print_square-prints an equivalent
  *@size: the size of the square
  *
  *Return: void
  */

void print_square(int size)
{
	int m, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		m = 0;
		while (m < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			m++;
		}
	}
}
