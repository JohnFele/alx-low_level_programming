#include <stdio.h>
/**
 * main - alphabet in lower and upper case
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
