#include <stddef.h>

/**
* _strncat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of characters to concatenate from src.
*
* Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate at most n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Null-terminate the resulting string */
	dest[dest_len + i] = '\0';

	return (dest);
}
