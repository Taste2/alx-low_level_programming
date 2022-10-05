#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(str));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sizeof(str); i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
