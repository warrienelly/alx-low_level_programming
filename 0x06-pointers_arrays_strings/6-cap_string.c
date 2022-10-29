/**
 * *cap_string - Capitalises all words of a string
 * seperators of words: spaces, tabulation, new line
 *    ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @s: string value
 *
 * Return: Pointer
 */
char *cap_string(char *s)
{
	int i = 0;
	int sep;
	int list_sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (s[i] != '\0')
	{
		for (sep = 0; sep < 13; sep++)
		{
			if (s[i] == list_sep[sep])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
				break;
			}
		}
		i++;
	}
	return (s);
}
