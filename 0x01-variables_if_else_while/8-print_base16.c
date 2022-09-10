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
	int m;
	char herr;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (herr = 'a'; herr <= 'f'; herr++)
		putchar(herr);
	putchar('\n');

	return (0);
}
