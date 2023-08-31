#include "main.h"
/**
 * set_bit - sets the number at given index to 1
 * @n: given bit number
 * @index: given index
 *
 * Return: 1 on success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
		return (1);
}
