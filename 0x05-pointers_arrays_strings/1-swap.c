/**
 * swap_int - function that swaps the value of two integers.
 * @b: second integer
 * @a: first integer
 *
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
