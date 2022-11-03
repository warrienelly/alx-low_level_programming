/**
 * *_memcpy - function copies n bytes from memory
 * area src to memory area dest
 *
 * @dest: destination of copied memory
 * @src: source from where data will come
 * @n: number of byte to be copied
 *
 * Return: Always pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
