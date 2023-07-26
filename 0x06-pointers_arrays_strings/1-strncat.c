/**
 * _strncat - Concatenates n bytes from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
		p++;

	for (; n > 0 && *src; n--)
		*p++ = *src++;

	*p = '\0';

	return dest;
}

