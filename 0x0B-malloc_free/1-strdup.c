/**
 * _strlen - find the length of a string
 * @str: string to be found
 *
 * Return: Integer
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to a new string which
 * is a duplicate of the string str. Memory for the new string with
 * malloc, and can be freed with free.
 *
 * @str: pointer of assigning string
 *
 * Return: Always pointer or NULL
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;

	int i = 0;

	len = _strlen(str);
	ptr = malloc(sizeof(*str) * (len + 1));

	if (*str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);

}
