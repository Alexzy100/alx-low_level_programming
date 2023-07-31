/**
*_strchr - Locates the first occurrence of a character in a string.
*@s: Pointer to the string to search.
*@c: Character to locate.
*
*Return: Pointer to the first occurrence of the character c in the string s,
*/
char *_strchr(char *s, char c)
{
while (*s != c)
{
if (*s == '\0')
{
return (s);
}
s++;
}
return (s);
}
