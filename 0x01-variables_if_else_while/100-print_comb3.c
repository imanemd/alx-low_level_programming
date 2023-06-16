#include <stdio.h>
/**
  *main - Entry point of the program
  *Description: the variable n is positive or negative
  *Return: 0 on successful program execution.
  */
int main(void)
{
	int tens_digit = 0;
	int ones_digit;

	while (tens_digit <= 8)
	{
		ones_digit = tens_digit + 1;

		while (ones_digit <= 9)
		{
			putchar(tens_digit + '0');
			putchar(ones_digit + '0');

			if (tens_digit != 8 || ones_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
			ones_digit++;
		}
		tens_digit++;
	}
	putchar('\n');
	return (0);
}
