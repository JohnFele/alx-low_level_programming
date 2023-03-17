#include <stdio.h>
/**
 * main - alphabet except q and e
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'p' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
