#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: integer input
 *
 * Return: 1 if c is digit and 0 if it is not
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
