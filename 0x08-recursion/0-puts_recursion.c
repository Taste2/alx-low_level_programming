#include "main.h"

/**
 * _puts_recursion - print string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	unsigned int = 0;

	if (s[i] == '\0')
	{
		return;
	}
	_puts_recursion(s[i]);
	i++;
}
