#include "main.h"
#include <stdio.h>

/**
  *print_to_98 - printing numbers to n
  *@n: starting value
  *
  *Return: no value
  */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i != 98)
			{
				printf("%d, ",i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n >= 98)
		for (j = n; j > 97; j--)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else
				printf("%d\n", j);
		}
}
