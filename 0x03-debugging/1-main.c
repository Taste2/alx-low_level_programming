#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

/**
 * i - is not set to increase therefore leading to infinite loop
 *	while (i < 10)
 *	{
 *		putchar(i);
 *	}
 *printf - prints messages
 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
