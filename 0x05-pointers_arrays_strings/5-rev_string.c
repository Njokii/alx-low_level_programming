#include "main.h"
#include <stdio.h>
/**
  *rev_string - rverses a given string
  *@s : sring to  be reversed
  *Return: Always 0
  */

void rev_string(char *s)
{
	int t, m, g;
	char rev;

	t = 0;
	while (s[t] != '\0')
	{
		t++;
	}
	m = 0;
	g = t - 1;
	while (m < g)
	{
		rev = s[m];
		s[m] = s[g];
		s[g] = rev;

		m++;
		g--;
	}

}
