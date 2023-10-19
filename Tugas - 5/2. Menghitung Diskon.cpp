#include <stdio.h>

int main() {
    char kode;
    float harga, diskon, hargaSetelahDiskon;

    // Menerima masukan kode, jenis, dan harga
    printf("Masukkan kode (A/B/C): ");
    scanf(" %c", &kode);

    printf("Masukkan harga: ");
    scanf("%f", &harga);

    // Menghitung diskon berdasarkan jenis
    switch(kode) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Kode jenis tidak valid.\n");
            return 1; // Menghentikan program dengan kode error
    }

    // Menghitung harga setelah didiskon
    hargaSetelahDiskon = harga - (harga * diskon);

    // Menampilkan hasil
    printf("Harga setelah diskon: %.2f\n", hargaSetelahDiskon);

    return 0;
}
