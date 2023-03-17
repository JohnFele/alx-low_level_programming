#include <stdio.h>
/**
 * main - single digit numbers of base 10 without using char
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
