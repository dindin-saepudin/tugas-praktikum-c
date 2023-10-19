#include <stdio.h>

int main() {
    // Deklarasi variabel
    int bilangan;

    // Input bilangan
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Cek apakah bilangan ganjil atau genap
    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            printf("Bilangan tersebut adalah GENAP\n");
        } else {
            printf("Bilangan tersebut adalah GANJIL\n");
        }
    } else {
        printf("Masukkan bilangan bulat positif.\n");
    }

    return 0;
}
