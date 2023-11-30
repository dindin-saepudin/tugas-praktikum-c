#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int count = 0;

    // Input karakter C
    printf("Masukkan karakter C: ");
    scanf(" %c", &C);  // Spasi sebelum %c untuk mengabaikan whitespace (seperti newline) yang mungkin tersisa di buffer

    // Periksa apakah karakter C ada dalam array
    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            count++;
        }
    }

    // Cetak hasil
    if (count > 0) {
        printf("ADA, jumlah karakter '%c' dalam array: %d\n", C, count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
