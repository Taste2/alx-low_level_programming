#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Four aphabet dot c
 *
 * Return: 0
 */
int main(void)
{

	char hello, e, q;

	e = 'e';
	q = 'q';

	for (hello = 'a'; hello <= 'z'; hello++)

	{
		if (hello != e && hello != q)
			putchar(hello);
	}
	putchar('\n');

	return (0);

}
