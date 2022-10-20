#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @n: the interger to check against
 * Return: Any Interger Number
 *  abs_v -  for interger of absolute values
 */
int _abs(int n)
{
	int abs_v;

	if (n < 0)
	{
		abs_v = -1 * n;
	}
	else
	{
		abs_v = n;
	}

	return (abs_v);
}
