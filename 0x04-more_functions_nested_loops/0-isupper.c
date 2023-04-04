#include "main.h"

/**
  *_isupper- checks for upper case character
  *@c: character to be checked
  *
  *Return: 1 c is uppercase 0 otherwise
  */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
