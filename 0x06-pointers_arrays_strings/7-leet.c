#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetMap[5] = {'A', 'E', 'O', 'T', 'L'};
	char leetNums[5] = {'4', '3', '0', '7', '1'};
	int i;

	while (*ptr)
	{
		i = 0;
		while (i < 5)
		{
			if (*ptr == leetMap[i] || *ptr == leetMap[i] + 32)
			{
				*ptr = leetNums[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
