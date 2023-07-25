/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 *           to the buffer pointed to by dest.
 *
 * @dest: Pointer to the destination buffer where the string will be copied.
 * @src: Pointer to the source string that needs to be copied.
 *
 * Return: The pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_start);
}
