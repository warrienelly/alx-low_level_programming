#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98,
 *  followed by a new line.
 * @n: input number
 *
 * Return: void
 */

void print_to_98(int n)
{

	int i;

	if (98 < n)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				_putchar('0' + (i / 100));
				_putchar('0' + ((i /10) % 10));
			}

			if (i > 9 && i <= 99)
			{
				_putchar('0' + (i / 10));
			}

			_putchar('0' + (i % 10));

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}


	if (98 > n)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				int a;

				_putchar('-');
				a = -i;
				if (a > 9)
				{
					_putchar('0' + (a / 10));
				}
				_putchar('0' + (a % 10));
			}

			if (i >= 0)
			{

				if (i > 9)
				{
					_putchar('0' + (i / 10));
				}

				_putchar('0' + (i % 10));
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
