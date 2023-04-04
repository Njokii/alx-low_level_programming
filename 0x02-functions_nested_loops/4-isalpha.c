#include "main.h"

/**
  *_isalpha - checks if a character is an alphabet
  *@c: charater to be checked
  *
  *Return: 1 if a letter 0 otherwise
  */

int _isalpha(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
