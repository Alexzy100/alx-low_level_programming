#include <stdio.h>
#include <limits.h>

int _atoi(char *s);

int main()
{
    char str[] = "1234567";
    int num = _atoi(str);
    printf("Converted number: %d\n", num);
    return 0;
}

int _atoi(char *s)
{
    int sign = 1;
    int n = 0;
    int digit;

    while (*s == ' ')
        s++;

    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    while (*s >= '0' && *s <= '9')
    {
        digit = *s - '0';

        // Check for potential overflow before updating n
        if (n > (INT_MAX - digit) / 10)
        {
            // Handle overflow here (you can return an error value or take appropriate action)
            // For now, let's return 0 to indicate an error
            return 0;
        }

        n = n * 10 + digit;
        s++;
    }

    return (n * sign);
}
