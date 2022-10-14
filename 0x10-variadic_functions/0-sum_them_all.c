#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: integer
 *
 * Return: 0 always sucess
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumnumbers;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(sumnumbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sumnumbers, int);

	va_end(sumnumbers);

	return (sum);
}
