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
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
			putchar(',');
	}
	putchar('$');
	putchar('\n');

	return (0);
}
