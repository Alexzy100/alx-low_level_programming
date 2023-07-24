#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/* Function to generate a random character */
char getRandomChar() {
    /* Characters to choose from for the password */
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int len = sizeof(characters) - 1;
    return characters[rand() % len];
}

int main() {
    int i; // Declare i before the loop to conform to ISO C90

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1]; /* +1 for null-terminator */

    /* Generate the password */
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = getRandomChar();
    }

    password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password string */

    /* Print the generated password */
    printf("%s\n", password);

    return 0;
}
