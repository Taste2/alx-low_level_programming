#include "main.h"

/**
 * _strchr - find a char in a str
 * @s: the string to be looked into
 * @c: the char to be searched
 * Return: Null if not found else c
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	int i;

	while (s[n] = '\0')
	{
		n++;
		return (n);
	}

	for (i = 0; i < n; i++)
	{
		if (s[i] != c)
		{
			return (NULL);
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
