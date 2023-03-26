#include <stdio.h>

/**
  *main-  entrypoint
  *prints the alphabets from a to z in lowercase
  *
  *Return: is always 0
  */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
