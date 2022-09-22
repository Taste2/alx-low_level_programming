#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int u = 0;
	int v = 0;
	/*iterate until the last character is the null character*/
	while (dest[u] != '\0')
	{
		u++;
	}
	/*replace the null character with the src string*/
	while (src[v] != '\0')
	{
		dest[u] = src[v];
		v++;
		u++;
	}

	dest[u] = '\0';
	return (dest);

}

