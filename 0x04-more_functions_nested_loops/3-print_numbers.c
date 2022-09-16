#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 *
 * _putchar - prints characters
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
