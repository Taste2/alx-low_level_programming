#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Two aphabet dot c
 *
 * Return: 0
 */
int main(void)
{
	int w;

	for (w = '0'; w <= '9'; w++)
	{
		putchar(w);
		if (w != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
