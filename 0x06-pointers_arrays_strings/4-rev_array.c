/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: an array of integers
 * @n: the numver of elements to swap
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = n - 1;

	while (start != end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}

