#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * from 00:00 to 23:59
 *
 * Returns: void
 */
void times_table(void)
{
	int col;

	for (col = 0; col < 10; col++)
	{
		int row;
		int mult;

		for (row = 0; row < 10; row++)
		{
			mult = col * row;

			if ((mult / 10) == 0)
			{
				if (row != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}

			if ((mult / 10) != 0)
			{

				_putchar(' ');
				_putchar('0' + (mult / 10));
			}

			_putchar('0' + (mult % 10));

			if (row != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
