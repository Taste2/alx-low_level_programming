#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9 except 2 and 4
 *
 * _putchar - print the numbers
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && != 52)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
