#include "main.h"

/**
  *print_alphabet_x10 - printing the alphabet 10 times
  *
  *Return: nil
  */

void print_alphabet_x10(void)
{
	int j;
	int i = 1;

	while (i <= 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
