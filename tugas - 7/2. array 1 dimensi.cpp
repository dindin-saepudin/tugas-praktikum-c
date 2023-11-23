#include <stdio.h>

int main() {
    // Mendefinisikan array
    int A[11];
    int index = 0;

    // Data dari dokumen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    // Menginput data dan menyimpan nilai genap ke dalam array
    printf("Data dalam dokumen:\n");
    for (int i = 0; i < 11; ++i) {
        printf("%d ", data[i]);
        if (data[i] % 2 == 0) {
            A[index] = data[i];
            ++index;
        }
    }

    // Mencetak isi array yang berisi nilai genap
    printf("\n\nIsi array dengan nilai genap:\n");
    for (int i = 0; i < index; ++i) {
        printf("%d ", A[i]);
    }

    return 0;
}
