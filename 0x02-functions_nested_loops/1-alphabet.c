#include "main.h"
/**
 * main - print alphabet from the function stated
 *
 * Return: 0
 */
int main(void)

{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'A'; i++)
		_putchar(i);
		_putchar('\n');

}
