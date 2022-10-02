#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if is uppercase and 0 if it is not
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
