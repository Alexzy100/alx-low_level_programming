#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
        int sign = 1;
        int n = 0;

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
                n = n * 10 + (*s - '0');
                s++;
        }
