#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0;
    float average;

    // Menghitung rata-rata nilai mahasiswa dari array A
    for (int i = 0; i < 12; ++i) {
        sum += A[i];
    }

    average = (float)sum / 12;

    // Memindahkan nilai-nilai ke array B dan C
    int indexB = 0, indexC = 0;
    for (int i = 0; i < 12; ++i) {
        if (A[i] > average) {
            B[indexB++] = A[i];
        } else if (A[i] < average) {
            C[indexC++] = A[i];
        }
    }

    // Menampilkan isi array A
    printf("Array A: ");
    for (int i = 0; i < 12; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan isi array B
    printf("Array B: ");
    for (int i = 0; i < indexB; ++i) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Menampilkan isi array C
    printf("Array C: ");
    for (int i = 0; i < indexC; ++i) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
