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
	int i;
	char *p;

	p = dest;

	while (*p)
		p++;

	for (i = 0; i < n && src[i]; i++)
		*p++ = src[i];

	*p = '\0';

	return dest;
}
