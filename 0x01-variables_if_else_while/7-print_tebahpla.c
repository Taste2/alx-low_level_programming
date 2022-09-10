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
	char okay;

	for (okay = 'z'; okay >= 'a'; okay--)
		putchar(okay);
	putchar('\n');

	return (0);
}
