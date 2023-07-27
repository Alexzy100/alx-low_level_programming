#include <stdio.h>

char *rot13(char *s) {
    char *ptr = s;

    while (*ptr != '\0') {
        char ch = *ptr;

        /* Check if the character is an uppercase letter */
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + 13) % 26) + 'A';
        }
        /* Check if the character is a lowercase letter */
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + 13) % 26) + 'a';
        }

        *ptr = ch;
        ptr++;
    }

    return s;
}
