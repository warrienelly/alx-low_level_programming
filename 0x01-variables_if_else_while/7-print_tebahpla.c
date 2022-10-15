#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print range of numbers from 0 to 10
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
