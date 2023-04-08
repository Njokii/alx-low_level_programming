#include "main.h"

/**
  *more_numbers - print numbers 0-9
  *
  *Return:void
  */

void more_numbers(void)
{
	int j, k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
