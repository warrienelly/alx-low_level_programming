#include "main.h"
/**
 * print_diagonal - draw a diagonal  line in the terminal
 * @n: the number of times the character _ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
					_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
