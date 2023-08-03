#include "main.h"
#include <unistd.h>

/**
 * _putchar - for writing character c to stdout
 * @c: For the character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno isappropriately set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
