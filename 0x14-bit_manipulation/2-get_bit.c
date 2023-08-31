#include "main.h"
/**
 * get_bit - finds value of bit at given index
 * @n: given number
 * @index: given index
 *
 * Return: value of bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
		return (value);
}
