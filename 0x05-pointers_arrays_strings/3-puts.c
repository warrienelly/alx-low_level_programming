#include "main.h"
/**
 * _puts - function that pints a string, followed by a new line.
 * @str: the string
 *
 *
 * Return: Always void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
