/*
 * _strcat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Returns: a pointer to the destination string
 */
char *_strcat(char *dest, char *src) {
  int i, j;

  /* Find the end of the destination string */
  for (i = 0; dest[i] != '\0'; i++) {
  }

  /* Iterate through the source string, copying each character to the destination string */
  for (j = 0; src[j] != '\0'; j++) {
    dest[i + j] = src[j];
  }

  /* Append a null character to the destination string */
  dest[i + j] = '\0';

  /* Return a pointer to the destination string */
  return dest;
}
