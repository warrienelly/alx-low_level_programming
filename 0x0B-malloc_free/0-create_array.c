#include <stdlib.h>
/**
 * *create_array  - function that creates an array of
 * characters, and intialise with specific char.
 *
 * @size: size of the character
 * @c: the type of character available
 *
 * Return: Always pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (counter < size)
	{
		*(ptr + counter) = c;
		counter++;
	}
	return (ptr);
}
