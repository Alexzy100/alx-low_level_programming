I#include <stdbool.h>

/**
 * _atoi - Converts a string to an integer.
 *
 * @param nptr The string to convert.
 *
 * @return The integer representation of the string.
 *
 * If the string does not contain a valid integer, the function returns 0.
 */
int _atoi(const char *nptr) {
    int sign = 1;
    int n = 0;
    bool found_digit = false;

    /* Skip over any non-digit characters and handle signs */
    while (*nptr) {
        if (*nptr == '-') {
            sign = -sign;
            nptr++;
        } else if (*nptr == '+') {
            nptr++;
        } else if (*nptr >= '0' && *nptr <= '9') {
            found_digit = true;
            break;
        } else {
            /* Skip non-digit characters */
            nptr++;
        }
    }

    /* Parse the integer value */
    while (*nptr >= '0' && *nptr <= '9') {
        /* Handling potential signed integer overflow using __builtin_mul_overflow */
        if (__builtin_mul_overflow(n, 10, &n) || __builtin_add_overflow(n, (*nptr - '0'), &n)) {
            /* Overflow occurred, return 0 as per the function description */
            return 0;
        }
        nptr++;
    }

    /* If no digits were found, return 0 */
    if (!found_digit) {
        return 0;
    }

    return sign * n;
}
