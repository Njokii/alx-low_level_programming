#include "main.h"

/**
  *_islower - chechks if alphabets are lower case
  *@c: is the character to be checked
  *
  *Return: 1 if lower 0 otherwise
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
