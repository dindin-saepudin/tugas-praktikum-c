#include <stdio.h>

int main() {
    // Kecepatan tetap (meter/detik)
    int kecepatan = 2;

    // Waktu (detik)
    int waktu = 100;

    // Menghitung jarak yang ditempuh
    int jarak[10]; // Menyimpan hasil per detik dalam array

    for (int i = 0; i < 10; ++i) {
        jarak[i] = kecepatan * (i + 1); // Jarak = kecepatan * waktu
    }

    // Mencetak hasil
    printf("Jarak yang ditempuh setiap detik:\n");

    for (int i = 0; i < 10; ++i) {
        printf("Detik ke-%d: %d meter\n", i + 1, jarak[i]);
    }

    return 0;
}

