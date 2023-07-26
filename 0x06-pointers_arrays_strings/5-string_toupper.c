#include <ctype.h>

/*
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: the string to be converted
 *
 * Returns: a pointer to the converted string
 */
char *string_toupper(char *str) {
  char *ptr = str;

  for (; *str != '\0'; str++) {
    *str = toupper(*str);
  }

  return ptr;
}
