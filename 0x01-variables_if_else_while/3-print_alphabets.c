#include <stdio.h>

/**
  *main -entry point
  *printing lowercase and alphabets
  *
  *Return: Always 0; success
  */
int main(void)
{
	int l;
	int u;

	l = 97;
	u = 65;
	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
