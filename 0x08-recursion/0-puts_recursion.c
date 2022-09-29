#include "main.h"

/**
 * _puts_recursion - print string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	puts_recursion(s + 1);
}
