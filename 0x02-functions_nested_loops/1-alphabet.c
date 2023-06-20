#include "main.h"
/**
  *print_alphabet - Entry point of the program
  *Description: the variable n is positive or negative
  *Return: 0 on successful program execution.
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
