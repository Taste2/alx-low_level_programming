#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printif("Size of a char: %d bytes \n", sizeof(char));
	printif("Size of a int: %d bytes \n", sizeof(int));
	printif("Size of a long int: %d bytes \n", sizeof(long int));
	printif("Size of a long long int: %d bytes \n", sizeof(long long int));
	printif("Size of a float: %d bytes \n", sizeof(float));
			return (0);
}
