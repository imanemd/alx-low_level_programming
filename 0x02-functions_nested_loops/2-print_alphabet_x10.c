#include "main.h"
/**
  *print_alphabet_x10 - Entry point of the program
  *Description: the variable n is positive or negative
  *Return: 0 on successful program execution.
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j =1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

