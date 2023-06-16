#include <stdio.h>
/**
  *main - Entry point of the program
  *Description: the variable n is positive or negative
  *Return: 0 on successful program execution.
  */
int main(void)
{
	int hundreds_digit = 0;
	int tens_digit;
	int ones_digit;

	while (hundreds_digit <= 7)
	{
		tens_digit = hundreds_digit + 1;

		while (tens_digit <= 8)
		{
			ones_digit = tens_digit + 1;

			while (ones_digit <= 9)
			{
				putchar(hundreds_digit + '0');
				putchar(tens_digit + '0');
				putchar(ones_digit + '0');

				if (hundreds_digit != 7 || tens_digit != 8 || ones_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
				ones_digit++;
			}
			tens_digit++;
		}
		hundreds_digit++;
	}
	putchar('\n');
	return (0);
}

