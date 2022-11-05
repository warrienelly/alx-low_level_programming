#include <stdio.h>
/**
 * *_strpbrk - function that that  locates the first
 * occurrence in the string s of any of the bytes in
 * the string accept
 *
 * @s: intial string to check
 * @accept: string to check against
 *
 * Return: Always pointer of accept of NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, flag;

	i = 0;
	flag = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 1;
				return (s + i);
			}
			j++;
		}

		i++;
	}
	if (flag == 0)
		return (NULL);
	return (NULL);

}

