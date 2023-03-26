#include <stdio.h>

/**
  *main -entry point
  *printing alphabets in reverse
  *
  *Return: Always 0 - success
  */

int main(void)
{
	int r;

	for (r = 122; r >= 97; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
