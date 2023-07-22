#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0.
 *              Uses only two putchar functions and follows Betty style.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	digit = '0';
	putchar(digit);
	digit = '0' + 1;
	putchar(digit);
	digit = '0' + 2;
	putchar(digit);
	digit = '0' + 3;
	putchar(digit);
	digit = '0' + 4;
	putchar(digit);
	digit = '0' + 5;
	putchar(digit);
	digit = '0' + 6;
	putchar(digit);
	digit = '0' + 7;
	putchar(digit);
	digit = '0' + 8;
	putchar(digit);
	digit = '0' + 9;
	putchar(digit);
	putchar('\n');

	return (0);
}
