#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 *
 * @param s The string to convert.
 *
 * @return The integer representation of the string.
 *
 * If the string does not contain a valid integer, the function returns 0.
 *
 * @author Bard
 */
int _atoi(char *s) {
  int sign = 1;
  int n = 0;

  while (*s == ' ') {
    s++;
  }

  if (*s == '-') {
    sign = -1;
    s++;
  } else if (*s == '+') {
    sign = 1;
    s++;
  }

  while (*s >= '0' && *s <= '9') {
    n = n * 10 + (*s - '0');
    s++;
  }

  if (n > INT_MAX) {
    return INT_MAX;
  } else if (n < INT_MIN) {
    return INT_MIN;
  }

  return sign * n;
}
