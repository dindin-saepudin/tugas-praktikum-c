#include <stdio.h>

int main() {
    // Jumlah uang awal (Rupiah)
    double jumlahUang = 1000000;

    // Tingkat bunga per bulan (2%)
    double bunga = 0.02;

    // Menghitung jumlah uang setelah 10 bulan
    for (int bulan = 1; bulan <= 10; ++bulan) {
        jumlahUang += jumlahUang * bunga; // Menambahkan bunga ke saldo uang
    }

    // Mencetak jumlah uang setelah 10 bulan
    printf("Jumlah uang setelah 10 bulan: Rp. %.2lf\n", jumlahUang);

    return 0;
}
