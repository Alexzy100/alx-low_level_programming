#include <stdio.h>

int _atoi(char *s);

int main()
{
    char str[] = "12345";
    int num = _atoi(str);
    printf("Converted number: %d\n", num);
    return 0;
}
