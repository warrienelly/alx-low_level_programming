#include "main.h"
/**
 * puts_half - function that prints half of a string
 * , followed by a new line.
 *
 *@str: the string to work with.
 *
 */

void puts_half(char *str)
{
	int i;
	int j;
	int half;
	int len = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}


	half = len / 2;
	for (j = half; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
