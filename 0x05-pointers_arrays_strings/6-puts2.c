#include "main.h"
/**
 * puts2 - function that prints every other character of a
 *  string , starting with the first character, followed
 *  by a new line.
 *
 * @str: string to be worked on.
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (((i + 2) % 2) == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}

