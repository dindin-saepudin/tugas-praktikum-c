#include <stdio.h>

int main() {
    int A[11]; // Deklarasi array A dengan ukuran 11
    int data;  // Variabel untuk menyimpan data input
    int currentIndex = 1; // Indeks awal untuk menyimpan data ganjil

    // Penginputan data ke dalam array A
    printf("Masukkan data ke dalam array (akhiri dengan 999 sebagai End Of Data):\n");

    while (1) {
        scanf("%d", &data); // Input data dari pengguna

        // Cek apakah data adalah End Of Data (999)
        if (data == 999) {
            break; // Keluar dari loop jika data adalah End Of Data
        }

        // Cek apakah data adalah ganjil
        if (data % 2 != 0) {
            // Simpan data ganjil ke dalam array A pada indeks yang sesuai
            A[currentIndex] = data;
            currentIndex += 2; // Pindah ke indeks berikutnya untuk data ganjil
        }
    }

    // Menampilkan isi array A sesuai dengan format yang diminta
    printf("Isi array A: [ %d ],[ %d ],[ %d ],[...],[ %d ],[ %d ],[ %d ],[...],[ %d ]\n",
           A[0], A[1], A[2], A[4], A[5], A[6], A[8]);

    return 0;
}