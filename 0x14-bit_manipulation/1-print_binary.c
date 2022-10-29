#include "main.h"
/**
 * print_binary - prints the binary of a numb
 * @n: the number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int rem;

	unsigned long int j, power;

	rem = n;
	if (n == 0)
		_putchar('0');

	for (j = n; j >= 1; j--)
	{
		if ((j & (j - 1)) == 0)
		{
			power = j;
			if (power > rem)
			{
				_putchar('0');
				continue;
			}
			else if (power <= rem)
			{
				_putchar('1');
				rem -= power;
			}
		}
	}
}

