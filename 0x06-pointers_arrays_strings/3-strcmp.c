/**
 * _strcmp - Compare two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Integer value less than, equal to, or greater than zero if
 * the first string is found, respectively, to be less than,
 * to match, or be greater than the second string.
 */
int _strcmp(char *s1, char *s2)
{
	/* Remove space at the start of the line */
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/* Fix indentation for conditional statements */
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		i++;
	}

	return (s1[i] - s2[i]);
}
