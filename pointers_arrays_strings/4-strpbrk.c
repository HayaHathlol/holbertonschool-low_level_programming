#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any accepted byte
 * @s: String to search
 * @accept: Characters to search for
 *
 * Return: Pointer to first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
