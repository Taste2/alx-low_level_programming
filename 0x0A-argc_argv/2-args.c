#include <stdio.h>
#include <stdlib.h>
/**
 * main - all arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i]);
	i++;
	return (0);
}
