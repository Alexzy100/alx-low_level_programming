#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_null(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] == '\0') {
      str[i] = '\0';
      break;
    }
  }
}

int main() {
  char str[] = "This is a string with a null byte.";
  remove_null(str);
  printf("%s\n", str);
  return 0;
}
