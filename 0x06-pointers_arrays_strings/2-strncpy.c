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

	int i;
	int j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	j = 0;
	if (n >= 1)
	{
		while (src[j] != '\0')
		{
			if (j < n)
			{
				*(dest + j) = src[j];
			}
			j++;
		}
	}
	*(dest + j) = '\0';
	return (dest);

}

