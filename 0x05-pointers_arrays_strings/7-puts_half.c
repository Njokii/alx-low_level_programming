#include "main.h"

/**
*puts_half - main entry point
*@str -string in question
*return - always 0
*/

void puts_half(char *str)
{
	int b, n, m;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}

	if (m % 2 != 0)
	{
		n = (m - 1) /  2;
	}
	else
	{
		n = m / 2;
	}

	b = n;
	while (b <= m)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
