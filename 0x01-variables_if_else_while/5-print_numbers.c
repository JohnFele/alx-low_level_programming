#include <stdio.h>
/**
 * main - single digit numbers of base 10
 *
 * Return: 0 if seccessful
 *
 */
int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
