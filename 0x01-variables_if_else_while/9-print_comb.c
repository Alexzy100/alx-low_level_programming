#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two-digit numbers
 *              in ascending order, separated by ", " (comma followed by a space).
 *              Only the putchar function is used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = i + 1; j <= 9; ++j)
		{
			putchar(i + '0','j + 0');
			
			if (i < 8 || j < 9)
			{
				putchar(',',' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
