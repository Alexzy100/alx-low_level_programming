#include "main.h"

/**
*set_string - Sets the value of a pointer to a char.
*@s: Double pointer to the char.
*@to: Pointer to the char to set the pointer to.
*/
void set_string(char **s, char *to)
{
*s = to;
}
