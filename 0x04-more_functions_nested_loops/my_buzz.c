#include "main.h"
#include <stdio.h>
/**
 * main - Fizz- Buzz test: prints the numbers from 1 t0 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print
 * FizzBuzz.
 *
 * Return: Always o
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		if (i % 3 == 0)
			printf("Fizz ");
		if (i % 5 == 0)
			printf("Buzz ");
		else if (i == 100)
			printf("%d", i);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
