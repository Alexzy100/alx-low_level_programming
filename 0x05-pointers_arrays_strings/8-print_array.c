#include <stdio.h>

/**
 * print_array - Print n elements of an integer array, and a new line.
 * @a: Pointer to the integer array.
 * @n: Number of elements to print.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
