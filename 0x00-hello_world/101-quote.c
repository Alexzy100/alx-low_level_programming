#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 52;
    ssize_t bytes_written = write(2, message, len);

    if (bytes_written != len)
        return 1;

    return 1;
}

