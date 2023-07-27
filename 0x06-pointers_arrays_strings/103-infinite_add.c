#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int max_len = (len1 > len2) ? len1 : len2;
    int i, j, k; /* Move the variable declarations to the top */

    /* Check if the result can fit in the buffer */
    if (max_len + 1 > size_r) {
        return 0;
    }

    for (i = len1 - 1, j = len2 - 1, k = 0; k < max_len; i--, j--, k++) {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[k] = (sum % 10) + '0';
    }

    /* If there's still a carry after the loop ends, add it to the result */
    if (carry) {
        if (k == size_r) {
            return 0; /* Overflow, result cannot fit in buffer */
        }
        r[k] = carry + '0';
        k++;
    }

    r[k] = '\0';

    /* Reverse the result to get the correct order of digits */
    for (i = 0, j = k - 1; i < j; i++, j--) {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return r;
}

