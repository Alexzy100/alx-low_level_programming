#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  char password[6];
  for (int i = 0; i < 6; i++) {
    int character = rand() % 3;
    switch (character) {
      case 0:
        password[i] = 'a' + rand() % 26;
        break;
      case 1:
        password[i] = '0' + rand() % 10;
        break;
      case 2:
        password[i] = '!' + rand() % 5;
        break;
    }
  }

  printf("%s\n", password);
  return 0;
}
