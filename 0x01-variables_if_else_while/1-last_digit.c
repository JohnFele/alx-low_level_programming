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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	printf("Last digit of %d ", n);
	printf(" is %d ", m);
	if (m > 5)
		printf("and is greater than 5");
	else if (m == 0)
		printf("and is 0");
	else if (m < 0)
		printf("and is less than 6 and not 0");
	return (0);
}

