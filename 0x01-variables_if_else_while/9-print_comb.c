#include <stdio.h>

/**
  *main - entrypoint
  *printing all possible combinations of singlle digits
  *
  *Return: always 0- succes
  */

int main(void)
{
	int s;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
		if (s == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
