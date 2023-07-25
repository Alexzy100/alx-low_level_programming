int _atoi(const char *s) {
    int sign = 1;
    int n = 0;

    /* Skip over any leading whitespace characters */
    while (*s == ' ') {
        s++;
    }

    /* Handle sign characters */
    while (*s == '-' || *s == '+') {
        sign = (*s == '-') ? -sign : sign;
        s++;
    }

    /* Parse the integer value */
    while (*s >= '0' && *s <= '9') {
        /* Handling potential signed integer overflow */
        if (n > INT_MAX / 10 || (n == INT_MAX / 10 && (*s - '0') > INT_MAX % 10)) {
            /* Overflow occurred, return INT_MIN or INT_MAX based on the sign */
            return sign > 0 ? INT_MAX : INT_MIN;
        }
        n = n * 10 + (*s - '0');
        s++;
    }

    return sign * n;
}

