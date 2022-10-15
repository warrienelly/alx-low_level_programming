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

	for (num = 0; num <= 9; num++)
	{
		printf("%d",num);
	}
	putchar('\n');

	return (0);
}
