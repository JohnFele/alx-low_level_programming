#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to binary number
 *
 * Return: unisgined int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (int i = 0; b[i]; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			result = 2 * result + (b[i] - '0');
		else
			return (0);
			//result = 2 * result + (b[i] - '0');
	}
	return (result);
}
