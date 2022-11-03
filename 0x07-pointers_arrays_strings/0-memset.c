/**
 * *_memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: memory location
 * @b: constant byte to be copied
 * @n: number indicating n bytes
 *
 * Return: Aways pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while(i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
