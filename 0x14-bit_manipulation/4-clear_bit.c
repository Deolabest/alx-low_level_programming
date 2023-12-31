#include "main.h"

/**
 * clear_bit - for setting the value of a given bit to 0
 * @n: pointer to the number which is to be changed
 * @index: index of the bit to clear
 *
 * Return: -1 for failure, 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
