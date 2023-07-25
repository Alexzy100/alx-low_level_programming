/**
 * _atoi - Converts a string to an integer.
 *
 * @param s The string to convert.
 *
 * @return The integer representation of the string.
 *
 * If the string does not contain a valid integer, the function returns 0.
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
    s++;
  }

  while (*s >= '0' && *s <= '9') {
    n = n * 10 + (*s - '0');
    s++;
  }

  return n * sign;
}
