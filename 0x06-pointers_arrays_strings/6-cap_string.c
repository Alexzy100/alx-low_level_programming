#include <ctype.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int is_word = 1;

	/* Capitalize the first character, if it's a lowercase letter */
	if (str[0] && islower(str[0]))
	{
		str[0] = toupper(str[0]);
	}

	for (i = 1; str[i]; i++)
	{
		if (isspace(str[i]) || !isalpha(str[i - 1]))
		{
			is_word = 1;
		}
		else if (is_word)
		{
			str[i] = toupper(str[i]);
			is_word = 0;
		}
	}

	return (str);
}
