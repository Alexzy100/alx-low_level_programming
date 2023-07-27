#include <stddef.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	char *result = s;
	int i = 0;

	while (s[i])
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' ||
		    s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' ||
		    s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
		    s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
		    s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}

		i++;
	}

	return (result);
}
