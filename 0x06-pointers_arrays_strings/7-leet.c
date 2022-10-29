/**
 * *leet - encodes a string into 1337
 *  Letters a and A should be replaced by 4
 *  Letters e and E should be replaced by 3
 *  Letters o and O should be replaced by 0
 *  Letters t and T should be replaced by 7
 *  Letters l and L should be replaced by 1
 * @s: string values
 * 
 * Return: Always Pointer
 */
char *leet(char *s)
{
    int leet_count;
    char leet[] = "aAeEoOtTlL";
    char leet_no[] = "4433007711";

    int char_count = 0;

    while (s[char_count] != '\0')
    {
        for (leet_count = 0; leet_count < 10; leet_count++)
        {
            if (leet[leet_count] == s[char_count])
            {
                s[char_count] = leet_no[leet_count];
            }
        }
        char_count++;
    }

    return (s);

}
