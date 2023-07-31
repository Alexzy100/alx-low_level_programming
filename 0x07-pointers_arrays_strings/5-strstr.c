#include <stddef.h>

/**
*_strstr - Finds the first occurrence string haystack.
*@haystack: Pointer to the string to search in.
*@needle: Pointer to the substring to find.
*Return: Pointer to the beginning of the located substring,
*or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *start_haystack, *start_needle;

while (*haystack)
{
start_haystack = haystack;
start_needle = needle;

while (*start_haystack && *start_needle && *start_haystack == *start_needle)
{
start_haystack++;
start_needle++;
}

if (!*start_needle)
{
return (haystack);
}

haystack++;
}

return (haystack);
}
