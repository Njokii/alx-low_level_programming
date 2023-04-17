#include "main.h"

/**
  *_puts- appends  new line at the end of a string
  *
  *Return: Always 0
  */

void _puts(char *str)
{
	int w;

	w = 0;
	while (str[w] != '\0')
	{
		_putchar(str[w]);
		w++;
	}
	_putchar('\n');
}
