#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];

    // Menyalin nilai lebih besar dari 10 dari array A ke array C
    int indexC = 0;
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Menyalin nilai lebih besar dari 10 dari array B ke array C
    for (int i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[indexC] = B[i];
            indexC++;
        }
    }

    // Menampilkan isi array C
    printf("a. ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Menampilkan isi array C dengan susunan seperti pada b.
    printf("b. ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }
    printf("...,");
    for (int i = 6; i < 12; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
