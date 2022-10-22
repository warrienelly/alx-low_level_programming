
/**
  * _isupper - checks for uppercase character
  *
  * @c: input character to check
  *
  * Return: 1 if c is uppercase; 0 otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
