#include <stdio.h>
/**
 *main - Entry point of the program
 *Description: the variable n is positive or negative
 *Return: 0 on successful program execution.
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number % 10 + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
