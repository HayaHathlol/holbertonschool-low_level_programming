#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String to encode
 *
 * Return: Pointer to s
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
		}
		i++;
	}

	return (s);
}
