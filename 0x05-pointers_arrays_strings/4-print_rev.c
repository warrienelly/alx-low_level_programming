#include "main.h"
/**
 * print_rev - function that prints a string in reverse,
 *  followed by a new line.
 * @s: the string
 *
 *
 * Return: Always void.
 */
void print_rev(char *s)
{
	char *ls;
	int i;

	ls = s;
	for (i = 0; *(ls + 1); i++)
	{
		ls = ls + 1;

	}
	
	if (i != 0)
	{
		while ((ls + 1) != s)
		{
			_putchar(*ls);
			ls--;
		}
	}
	_putchar('\n');

}
