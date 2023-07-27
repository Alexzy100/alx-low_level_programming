#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str) {
  int i;
  int is_word = 1;

  for (i = 0; str[i]; i++) {
    if (isspace(str[i])) {
      is_word = 1;
    } else if (is_word) {
      str[i] = toupper(str[i]);
      is_word = 0;
    }
  }

  return str;
}
