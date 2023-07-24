#include "main.h"
#include <stddef.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
    if (s == NULL)
        return;

    int length = 0;
    char *ptr = s;

    /* Calculate the length of the string */
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    /* Print the string in reverse */
    for (int i = length - 1; i >= 0; i--)
        _putchar(s[i]);

    /* Print a new line */
    _putchar('\n');
}
