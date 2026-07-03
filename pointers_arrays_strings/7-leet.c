#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
    int i = 0;
    int j;
    char leet_chars[] = "aAeEoOtTlL";
    char leet_replacements[] = "4433007711";
    
      while (str[i] != '\0')
    {
        j = 0;
        while (leet_chars[j] != '\0')
        {
            if (str[i] == leet_chars[j])
            {
                str[i] = leet_replacements[j];
                break;
            }
            j++;
        }
        i++;
    }

    return (str);
}