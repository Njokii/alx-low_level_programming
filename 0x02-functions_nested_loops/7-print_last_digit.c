#include "main.h"

/**
  *print_last_digit - printing the last digit of a number
  *@f: the number to be checked
  *
  *Return: the value of the last number
  */

int print_last_digit(int f)
{
	int m;

	m = f % 10;
	if (m < 0)
	{
		m = -m;
	}
	_putchar('0' + m);
	return (m);
}

