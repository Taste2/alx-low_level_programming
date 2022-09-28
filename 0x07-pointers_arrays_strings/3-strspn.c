#include "main.h"
/**
 * _strspn - searches char in a str
 * @s: string to searched
 * @accept: characters to find in s
 * Return: number of characters found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count_num = 0;

	unsigned int i = 0;

	unsigned int j;

	while (accept[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				count_num++;
				break;
			}
		}
		i++;
	}
	return (count_num);
}
