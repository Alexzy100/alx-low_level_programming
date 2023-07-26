char *_strncat(char *dest, char *src, int n)
{
  int i;
  char *p;

  p = dest;
  while (*p)
    p++;

  for (i = 0; i < n && src[i]; i++)
    *p++ = src[i];

  *p = '\0';

  return dest;
}
