#include <stdio.h>
/**
 * main - allpossible combinations of a single digit
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
