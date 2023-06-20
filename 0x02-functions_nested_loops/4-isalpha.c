#include "main.h"
#include <ctype.h>
/**
  *_isalpha - Entry point of the program
  *Description: the variable n is positive or negative
  *@c: the character in ASCII code
  *Return: 0 on successful program execution.
  */
int _isalpha(int c)
{
	if ((islower(c)) || (isupper(c)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

