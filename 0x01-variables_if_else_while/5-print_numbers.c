#include <stdio.h>

/**
  *main - entyrpoint
  *printing numbers 0-9
  *
  *Return: Always 0 - success
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
