#include <stdio.h>

/**
  *main - entry point
  *printing hexadecimal values
  *
  *Return: always 0- successs
  */

int main(void)
{
	int m;
	char g;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
	}
	for (g = 'a'; g <= 'f'; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
