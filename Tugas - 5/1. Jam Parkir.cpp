#include <stdio.h>

int main () {
	// Variabel yang dibutuhkan
	int jam_masuk, jam_keluar, lama_bekerja;
	
	// Proses input jam_masuk & Keluar
	printf("masukan jam masuk(1-12) : ");
	// %d diperuntukan untuk integer
	scanf("%d", &jam_masuk);
	// Proses input jam_masuk & Keluar
	printf("masukan jam keluar(1-12) : ");
	// %d diperuntukan untuk integer
	scanf("%d", &jam_keluar);
	
	//validasi jam masuk dan jam keluar(proses)
	if(jam_masuk < 1 || jam_masuk > 12 || jam_keluar < 1 || jam_keluar > 12){
		printf("Jam masuk atau jam keluar tidak valid.\n");
		return 1; // keluar dengan kode kesalahan
	}
	
	// Hitung lama bekerja
	lama_bekerja = jam_keluar - jam_masuk;
	
	// tampilkan lama bekerja
	printf("lama bekerja: %d jam\n", lama_bekerja);
	
	return 0;
}