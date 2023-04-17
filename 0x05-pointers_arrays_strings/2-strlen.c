#include "main.h"

/**
  *_strlen - counts the number of characters 
  *@s the characters to be coutned 
  *
  * Return: Always 0
  */

int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
