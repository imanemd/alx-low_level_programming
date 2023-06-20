#include "main.h"
/**
  *_islower - Entry point of the program
  *Description: the variable n is positive or negative
  *@c: the character in ASCII code
  *Return: 0 on successful program execution.
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

