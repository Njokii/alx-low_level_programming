#include <stdio.h>

/**
  *main - entry point
  *
  *Return: always 0; success
  */
int main(void)
{
	char c;
	int i;
	long int m;
	long long int g;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
