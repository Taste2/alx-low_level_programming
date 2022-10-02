#include "main.h"

/**
 * _strchr - find a char in a str
 * @s: the string to be looked into
 * @c: the char to be searched
 * Return: Null if not found else c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
