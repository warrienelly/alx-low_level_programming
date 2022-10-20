#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * from 00:00 to 23:59
 *
 * Returns: void
 */
void jack_bauer(void)
{
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		int mins;

		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');

			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
		}
	}
}

