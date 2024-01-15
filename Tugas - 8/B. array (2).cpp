#include <stdio.h>

int main() {
    int A[11]; // Deklarasi array A dengan ukuran 11
    int data;  // Variabel untuk menyimpan data input
    int index = 0; // Indeks untuk menentukan posisi penyimpanan data

    // Penginputan data ke dalam array A
    printf("Masukkan data ke dalam array (akhiri dengan 999 sebagai End Of Data):\n");

    while (1) {
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

    // Menampilkan isi array A sesuai format yang diminta
    printf("Isi array A: [ %d ],[ %d ],[...],[ %d ],[...],[...],[ %d ],[ %d ] [...],[ %d ],[ %d ]\n",
           A[0], A[1], A[3], A[6], A[7], A[9], A[10]);

    return 0;
}