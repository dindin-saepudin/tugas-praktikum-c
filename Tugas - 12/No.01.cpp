#include <stdio.h>

int main() {
    char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int i, j;
    int isDuplicate = 0;

    for (i = 0; i < 7; ++i) {
        for (j = i + 1; j < 8; ++j) {
            if (A[i] == A[j]) {
                isDuplicate = 1;
                printf("ADA\n");
                printf("Huruf yang sama: %c\n", A[i]);
                break;
            }
        }
        if (isDuplicate) {
            break;
        }
    }

    if (!isDuplicate) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
