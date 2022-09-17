#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times
 */
void print_numbers(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
