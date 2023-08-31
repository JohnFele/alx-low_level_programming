#include "main.h"
/**
 * flip_bits - gives the number of bits that need to be flipped
 * @n: first number
 * @m: number to get to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num, aim = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = aim >> i;
		if (num & 1)
			count++;
	}
	return (count);
}
