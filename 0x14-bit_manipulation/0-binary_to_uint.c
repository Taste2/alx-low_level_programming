#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned
 * int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if any of
 * the chars in b is not 1 or 0. Or if b is NUL
 * L
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, j;

	int pow = 1;

	unsigned int decima_l = 0;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '0')
		{
			j = 0;
		}
		else if (b[i] == '1')
		{
			j = 1;
		}

		decima_l += j * pow;
		pow += pow;
	}
	return (decima_l);
}
