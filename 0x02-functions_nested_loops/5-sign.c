#include "main.h"
#include <stdio.h>
/**
  *print_sign - Entry point of the program
  *Description: the variable n is positive or negative
  *@n: n character
  *Return: 0 on successful program execution.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
