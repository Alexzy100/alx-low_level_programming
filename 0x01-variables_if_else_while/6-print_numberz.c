#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10,
 *              starting from 0, followed by a new line.
 *              Only the putchar function is used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
