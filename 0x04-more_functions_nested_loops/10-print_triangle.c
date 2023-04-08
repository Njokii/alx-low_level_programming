#include "main.h"

/**
 *print_triangle - prints a traingle
 *@size:number of traingles to be printed
 *
 *Return: void
 */

void print_triangle(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		j = 0;
		while (j < size)
		{
			k = 0;
			while (k < size)
			{
				if (k < (size - j - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
				k++;
			}
			_putchar('\n');
			j++;
		}
	}
}
