#include "main.h"

/**
 *puts2 - main entry point
 *@str: character prints
 *return: always 0
 */

void puts2(char *str)
{
	int t, m, g;

	t = 0;
	while (str[t] != '\0')
	{
		t++;
	}
	m = t - 1;
	g = 0;
	while (g < m)
	{
		if (g % 2 != 0)
		{
		g++;
		}
		_putchar(str[g]);
		g++;
	}
	_putchar('\n');
}
