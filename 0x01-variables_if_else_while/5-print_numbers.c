#include <stdio.h>
/**
 *main - Entry point of the program
 *Description: the variable n is positive or negative
 *Return: 0 on successful program execution.
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
