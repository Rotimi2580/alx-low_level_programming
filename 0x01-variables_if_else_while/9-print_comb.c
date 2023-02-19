#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 for success.
 */

int main(void)
{
	int i = 0;

	while (i < 9)
	{
		putchar(i + '0');
		i++;
		putchar(',');
		putchar(' ');
	}

	putchar('9');

	return (0);
}
