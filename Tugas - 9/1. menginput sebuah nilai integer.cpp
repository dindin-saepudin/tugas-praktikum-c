#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;

    // Input nilai integer N
    printf("Masukkan nilai integer N: ");
    scanf("%d", &N);

    // Periksa apakah ada nilai yang sama dengan N dalam array
    int i;
    int index = -1;  // Inisialisasi dengan nilai yang tidak mungkin menjadi index valid

    for (i = 0; i < 11; i++) {
        if (A[i] == N) {
            index = i;
            break;  // Keluar dari loop jika nilai ditemukan
        }
    }

    // Cetak hasil
    if (index != -1) {
        printf("ADA, ditemukan di index %d\n", index);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
