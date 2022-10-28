#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a str from
 *  the src string to the dest string,
 *
 * @dest: resulting string
 * @src: source string
 * @n: n most byte to return.
 *
 * Return: Always pointer
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	int len = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = src[i];
	}

	for (i = len; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);

}

