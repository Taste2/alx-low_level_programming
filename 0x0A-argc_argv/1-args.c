#include <stdio.h>
#include <stdlib.h>

/**
 * main - number of arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: number of args
 */

int main(int argc, char *argv[])
{
	printf("%d\n", atoi(argv[argc - 1]));
		return (argc);
}
