#include <stddef.h>

char *rot13(char *s)
{
    char *result = s;
    int i = 0;

    while (s[i])
    {
        int is_upper = (s[i] >= 'A' && s[i] <= 'Z');
        int is_lower = (s[i] >= 'a' && s[i] <= 'z');

        if (is_upper || is_lower)
        {
            int base = is_upper ? 'A' : 'a';
            s[i] = (s[i] - base + 13) % 26 + base;
        }

        i++;
    }

    return result;
}
