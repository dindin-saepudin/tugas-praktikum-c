#include <stdio.h>

int main() {
    int A[11]; // Deklarasi array A dengan ukuran 11
    int data;  // Variabel untuk menyimpan data input
    int index = 0; // Indeks saat ini dalam array A

    // Penginputan data ke dalam array A
    printf("Masukkan data ke dalam array (akhiri dengan 999 sebagai End Of Data):\n");

    while (index < 11) {
        scanf("%d", &data); // Input data dari pengguna

        // Cek apakah data adalah End Of Data (999)
        if (data == 999) {
            break; // Keluar dari loop jika data adalah End Of Data
        }

        // Cek apakah data lebih besar dari 9
        if (data > 9) {
            // Simpan data ke dalam array A pada indeks yang sesuai
            A[index] = data;
            index++; // Pindah ke indeks berikutnya
        }
    }

    // Menampilkan isi array A sesuai dengan format yang diminta
    printf("Isi array A: [ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[...]\n",
           A[0], A[1], A[2], A[3], A[4], A[5], A[6], A[7], A[8], A[9]);

    return 0;
}