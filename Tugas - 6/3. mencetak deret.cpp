#include <stdio.h>

int main() {
    // Mencetak deret 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024
    int num = 1;

    for (int i = 0; i <= 10; ++i) {
        printf("%d ", num);
        num *= 2;
    }

    return 0;
}
