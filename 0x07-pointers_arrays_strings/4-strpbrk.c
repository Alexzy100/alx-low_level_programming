/**
*_strpbrk - Locates the first occurrence of any of the byte s.
*@s: Pointer to the string to search.
*@accept: Pointer to the set of bytes to match.
*Return: Pointer to the byte in s that matches one of the bytes in accept,
*a pointer to the null terminator if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
char *match;
while (*s)
{
for (match = accept; *match; match++)
{
if (*s == *match)
{
return (s);
}
}
s++;
}
return (s);
}
