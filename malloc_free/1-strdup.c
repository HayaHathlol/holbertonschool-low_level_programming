#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: Pointer to duplicated string, or NULL
 */
char *_strdup(char *str)
{
    char *copy;
    int i;
    int len;

    if (str == NULL)
        return (NULL);

    len = 0;
    while (str[len] != '\0')
        len++;

    copy = malloc((len + 1) * sizeof(char));
    if (copy == NULL)
        return (NULL);

    i = 0;
    while (i < len)
    {
        copy[i] = str[i];
        i++;
    }

    copy[i] = '\0';

    return (copy);
}
