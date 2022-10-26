#include "main.h"
/**
 * *_strcpy - function that copies the string pointed
 * by src, including the terminatng null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: pointer destination
 * @src:  string pointer source
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
