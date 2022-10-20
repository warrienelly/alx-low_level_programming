#include "main.h"

/**
 * print_sign - print alphabet from the function stated
 * @n: the interger to check against
 * Return: 0 for values that is 0, 1 for values that is positive,
 *  -1 for negative values
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
