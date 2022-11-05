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
	unsigned int flag;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		flag = 0;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 1;
				byte_count = byte_count + 1;
				break;
			}
			j++;
		}

		if (flag == 0)
			return (byte_count);
		i++;
	}
	return (byte_count);
}
