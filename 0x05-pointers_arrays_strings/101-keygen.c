#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to generate a random password
void generate_password(char *password, int length) {
    const char characters[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    int characters_count = strlen(characters);

    srand(time(0));

    for (int i = 0; i < length; i++) {
        password[i] = characters[rand() % characters_count];
    }

    password[length] = '\0';
}

int main() {
    char password[9]; // 8 characters + null terminator
    generate_password(password, 8);
    printf("%s\n", password);
    return 0;
}
