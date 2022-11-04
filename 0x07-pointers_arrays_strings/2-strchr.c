#include <stddef.h>
/**
 * *_strchr - function that returns first occurrence of
 * the character c in the string s,
 * or NULL if the character is not found
 *
 * @s: string to work on
 * @c: character to check on string
 *
 * Return: Always pointer to c
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
