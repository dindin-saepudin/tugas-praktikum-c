#include <stdio.h>

int main() {
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int count[26] = {0};  // Array untuk menyimpan jumlah kemunculan setiap huruf
    int maxCount = 0;
    char mostFrequent;

    // Menghitung kemunculan setiap huruf dalam array
    for (int i = 0; i < 10; ++i) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
            if (count[A[i] - 'A'] > maxCount) {
                maxCount = count[A[i] - 'A'];
                mostFrequent = A[i];
            }
        }
    }

    // Mencetak hasil
    if (maxCount > 1) {
        printf("Jumlah huruf terbanyak: %d\n", maxCount);
        printf("Huruf terbanyak: %c\n", mostFrequent);
    } else {
        printf("Tidak ada huruf yang berulang.\n");
    }

    return 0;
}
