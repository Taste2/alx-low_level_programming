#include "main.h"

/**
 * _memcpy - copies a mem location to another
 * @dest: destination
 * @src: source
 * @n: number of times to cpy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
