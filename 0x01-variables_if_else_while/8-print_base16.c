#include <stdio.h>
/**
 *main - Entry point of the program
 *Description: the variable n is positive or negative
 *Return: 0 on successful program execution.
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	digit = 'a';

	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}




