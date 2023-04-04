#include "main.h"

/**
  *_abs - computes the absolute value of a number
  *@m: value to be made absolute
  *
  *Return: the value itself
  */

int _abs(int m)
{
	if (m < 0)
	{
		m = ((-1) * (m));
		return (m);
	}
	else
	{
		return (m);
	}
}

