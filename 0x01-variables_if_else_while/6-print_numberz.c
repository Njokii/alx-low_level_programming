#include <stdio.h>

/**
  *main - entyry point
  *printing numbers using the put function
  *this is using actual characters and not Ascii values
  *
  *Return: Always 0 ; success
  */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
