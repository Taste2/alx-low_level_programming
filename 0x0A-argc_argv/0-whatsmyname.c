#include <stdio.h>
#include <stdlib.h>

/**
 * main - name of program
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
