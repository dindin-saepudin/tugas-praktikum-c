#include <stdio.h>

int main() {
    int A[11]; // Deklarasi array A dengan ukuran 11
    int data;  // Variabel untuk menyimpan data input

    // Inisialisasi indeks untuk array A
    int index = 0;

    // Penginputan data ke dalam array A
    printf("Masukkan data ke dalam array (akhiri dengan 999 sebagai End Of Data):\n");

    while (1) {
        scanf("%d", &data); // Input data dari pengguna

        // Cek apakah data adalah End Of Data (999)
        if (data == 999) {
            break; // Keluar dari loop jika data adalah End Of Data
        }

        // Cek apakah data adalah nilai ganjil
        if (data % 2 != 0) {
            // Simpan nilai ganjil ke dalam array A pada indeks yang sesuai
            A[index] = data;
            index++; // Pindah ke indeks selanjutnya
        }
    }

    // Menampilkan isi array A sesuai format yang diminta
    printf("Isi array A: [ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[ %d ],[...],[...],[...]\n",
           A[1], A[2], A[3], A[4], A[5], A[6], A[7]);

    return 0;
}