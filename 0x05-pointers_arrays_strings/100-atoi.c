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
        if (n > INT_MAX / 10 || (n == INT_MAX / 10 && digit > INT_MAX % 10))
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
