#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: the string
 *
 *
 * Return: Always interger.
 */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; *s; i++)
	{
		s++;
		sum++;
	}
	return (sum);

}
