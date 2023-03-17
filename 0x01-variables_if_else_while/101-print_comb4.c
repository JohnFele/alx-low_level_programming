#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int i;
	int j;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (n = 0 ; n < 10 ; n++)
			{
				if (i < j && j < n && i != j && j != n)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(n + '0');
					if (i + j + n != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
