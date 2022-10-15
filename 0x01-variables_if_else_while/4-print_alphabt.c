#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - PUT Character display with some exception
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
