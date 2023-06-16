#include <stdio.h>
/**
 *main - Entry point of the program
 *Description: the variable n is positive or negative
 *Return: 0 on successful program execution.
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
