/**
 * print_alphabet.c
 *
 * Prints the alphabet, in lowercase, followed by a new line.
 *
 * Uses the Betty style.
 */

#include <stdio.h>

void print_alphabet(void)
{
  char c;

  for (c = 'a'; c <= 'z'; c++)
  {
    /* Indent the code using four spaces. */
    printf("%c", c);
  }

  /* Print a new line. */
  printf("\n");
}
