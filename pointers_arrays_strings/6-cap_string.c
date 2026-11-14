#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: String to capitalize
 *
 * Return: Pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
		{
			new_word = 1;
		}
		else
		{
			if (new_word == 1 && s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - ('a' - 'A');

			new_word = 0;
		}
		i++;
	}

	return (s);
}
