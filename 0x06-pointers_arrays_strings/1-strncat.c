#include "main.h"
#include <stdio.h>
/**
 * *_strncat - appends the src string to the dest string,
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated 
 * if it contains n or more bytes.
 *
 * @dest: resulting string
 * @src: appending string
 * @n: n most byte to return.
 * 
 * Return: Always pointer
 */
char *_strncat(char *dest, char *src, int n)
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
			if (j <= (n-1))
			{
				*(dest + len) = src[j];
			}
			j++;
			len++;
		}
	}
	*(dest + len) = '\0';
	return (dest);

}

