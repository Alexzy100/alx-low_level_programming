/**
*_strspn - Gets the length of a prefix substring.
*@s: Pointer to the string to search in.
*@accept: Pointer to the substring containing accepted characters.
*Return: Number of bytes in the initial segment.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
char *a;

while (*s)
{
found = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
count++;
found = 1;
break;
}
}

if (!found)
break;

s++;
}

return (count);
}
