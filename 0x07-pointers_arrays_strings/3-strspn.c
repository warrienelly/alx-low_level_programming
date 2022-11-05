#include <stddef.h>
#include <stdio.h>

/**
 * _strspn - function that returns the number of
 * bytes in the initial segment of s which consist
 * only of bytes from accept
 *
 * @s: intial string to check
 * @accept: string to check against
 *
 * Return: Always unsigned int of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte_count = 0;
	unsigned int i;
	unsigned int j;

	j = 0;
	while (*(accept + j) != '\0')
	{
		i = 0;
		while (*(s + i) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				byte_count = byte_count + 1;
				break;
			}
			i++;
		}
		j++;
	}
	return (byte_count + 1);
}
