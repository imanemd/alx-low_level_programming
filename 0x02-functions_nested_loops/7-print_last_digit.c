#include "main.h"
#include <stdio.h>
/**
  *print_last_digit - Entry point of the program
  *Description: the variable n is positive or negative
  *@n: description
  *Return: 0 on successful program execution.
  */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);

}

