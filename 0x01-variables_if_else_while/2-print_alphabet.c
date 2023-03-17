#include <stdio.h>
/**
 * main - using putchar
 *
 * Return: 1 when true
 *
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
