#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check main
 * @n: An input integer
 * Description: function that prints all natural numbers
 * return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)

				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)

				continue;
			printf(", ");
		}
		printf("\n");
	}
}
