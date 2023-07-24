/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s) {
  /* Skip any leading whitespace characters. */
  while (*s == ' ') {
    s++;
  }

  /* If the first character is a '-' or '+' sign, store the sign and skip the sign character. */
  int sign = 1;
  if (*s == '-') {
    sign = -1;
    s++;
  } else if (*s == '+') {
    s++;
  }

  /* Convert each digit to an integer and add it to the result. */
  int n = 0;
  while (*s >= '0' && *s <= '9') {
    n = n * 10 + (*s - '0');
    s++;
  }

  /* Return the result, multiplied by the sign. */
  return n * sign;
}
