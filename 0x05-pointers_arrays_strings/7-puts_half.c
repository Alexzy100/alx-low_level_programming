#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
    int length = strlen(str);
    int n = (length - 1) / 2;
    int i;

    for (i = n + 1; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
