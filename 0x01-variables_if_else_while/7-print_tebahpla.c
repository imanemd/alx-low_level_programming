#include <stdio.h>
/**
 *main - Entry point of the program
 *Description: the variable n is positive or negative
 *Return: 0 on successful program execution.
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
