#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 *  followed by a new line
 *
 * @a: array of integers
 * @n: number of elements of array
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
}
