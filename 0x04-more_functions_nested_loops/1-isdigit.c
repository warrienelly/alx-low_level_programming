
/**
  * _isdigit - checks for a character is a digit 0-9
  *
  * @c: input character to check
  *
  * Return: 1 if c is digit(0-9); 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
