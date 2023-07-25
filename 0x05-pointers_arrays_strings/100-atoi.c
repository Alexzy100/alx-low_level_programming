/**
 * _atoi - Converts a string to an integer.
 *
 * @param nptr The string to convert.
 *
 * @return The integer representation of the string.
 *
 * If the string does not contain a valid integer, the function returns 0.
 *
 * @author Bard
 */
int _atoi(const char *nptr) {
    int sign = 1;
    int n = 0;

    while (*nptr == ' ') {
        nptr++;
    }

    if (*nptr == '-') {
        sign = -1;
        nptr++;
    } else if (*nptr == '+') {
        nptr++;
    }

    while (*nptr >= '0' && *nptr <= '9') {
        // Handling potential signed integer overflow using __builtin_mul_overflow
        if (__builtin_mul_overflow(n, 10, &n) || __builtin_add_overflow(n, (*nptr - '0'), &n)) {
            // Overflow occurred, return 0 as per the function description
            return 0;
        }
        nptr++;
    }

    return sign * n;
}
