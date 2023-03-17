#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - printing the last digit of n
 *
 * Return: 0 when true
 *
 */
int main(void)
{
	int n;
	int j;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	j = n % 10;
       	m = abs(j);
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (m < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	return (0);
}

