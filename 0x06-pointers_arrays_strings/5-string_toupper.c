#include <ctype.h>

/**
 * string_toupper - Convert all lowercase letters of a string to uppercase.
 * @str: The input string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (islower(*ptr))
			*ptr = toupper(*ptr);
		ptr++;
	}

	return (str);
}
