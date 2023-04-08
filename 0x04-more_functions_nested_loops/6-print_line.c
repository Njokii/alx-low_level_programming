#include "main.h"

/**
  *print_line- prints n number of lines or just a space
  *@n: number of lines to be printed
  *
  *Return: void
  */

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		m = 0;
		while (m <= n)
		{
			_putchar(95);
			m++;
		}
		_putchar('\n');
	}
}
