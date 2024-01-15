#include <stdio.h>

int main() {
    int A[11]; // Deklarasi array A dengan ukuran 11
    int data;  // Variabel untuk menyimpan data input

    // Penginputan data ke dalam array A
    printf("Masukkan data ke dalam array (akhiri dengan 999 sebagai End Of Data):\n");

    for (int i = 0; i < 11; i++) {
        scanf("%d", &data); // Input data dari pengguna

        // Cek apakah data adalah End Of Data (999)
        if (data == 999) {
            break; // Keluar dari loop jika data adalah End Of Data
        }

        // Simpan data ke dalam array A pada indeks yang sesuai
        A[i] = data;
    }

    // Menampilkan isi array A sesuai format yang diminta
    printf("Isi array A: [ %d ],[...],[ %d ],[...],[ %d ],[...],[ %d ],[...],[ %d ],[...],[ %d ]\n",
           A[0], A[2], A[4], A[6], A[8], A[10]);

    return 0;
}