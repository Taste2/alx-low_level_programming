#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Three aphabet dot c
 *
 * Return: 0
 */
int main(void)
{
	char danny;

	for (danny = 'a'; danny <= 'z'; danny++)
		putchar(danny);
	for (danny = 'A'; danny <= 'Z'; danny++)
		putchar(danny);
			putchar('\n');

	return (0);
}
