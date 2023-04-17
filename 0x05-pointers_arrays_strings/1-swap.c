#include "main.h"

/**
  *swap_int - swaps values of different integers 
  *@a: value one to be swapped
  *@b: value two to  be swapped
  *
  *Return: Always 0
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


