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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}