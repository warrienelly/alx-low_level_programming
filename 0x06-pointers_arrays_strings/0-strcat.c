#include "main.h"
#include <stdio.h>
/**
 * *_strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: resulting string
 * @src: appending string
 *
 * Return: Always pointer
 */
char *_strcat(char *dest, char *src)
{

	int i;
	int j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		*(dest + len) = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';
	return (dest);


}

