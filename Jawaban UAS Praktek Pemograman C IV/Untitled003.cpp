#include <stdio.h>
#include <unistd.h>

void aktifkan_motor(int kecepatan, int waktu) {
    printf("Motor berputar dengan kecepatan %d rpm selama %d menit.\n", kecepatan, waktu);
    sleep(waktu * 60);
}

void kontrol_klep_pengisian_air() {
    printf("Motor pembuka klep pengisian air aktif selama 2 menit.\n");
    sleep(2 * 60);
}

void kontrol_klep_pembuangan_air_kotor() {
    printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit.\n");
    sleep(2 * 60);
}

int deteksi_level_kekeruhan() {
    // Simulasi nilai kekeruhan air yang dideteksi oleh sensor turbidimeter
    return 18; // Nilai contoh, bisa diganti sesuai dengan kebutuhan
}

void tampilkan_menu() {
    printf("========== Menu Mesin Cuci ==========\n");
    printf("1. Mulai start\n");
    printf("2. Sensor turbidimeter aktif\n");
    printf("3. Motor listrik utama berputar\n");
    printf("4. Motor listrik utama berhenti\n");
    printf("5. motor listrik pembuka klep\n");
    printf("6. Motor listrik utama berputar dengan kecepatan 2000 Rpm\n");
    printf("7. Motor listrik pembuka klep\n");
    printf("8. Motor listrik berputar dengan kecepatan 2000 rpm\n");
    printf("9. selesai\n");
    printf("10. Keluar\n");
    printf("======================================\n");
}

int main() {
    int pilihan;

    do {
        tampilkan_menu();
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Tombol Start ditekan.\n");
                kontrol_klep_pengisian_air();

                int level_kekeruhan = deteksi_level_kekeruhan();
                printf("Level kekeruhan air: %d NTU\n", level_kekeruhan);

                int kecepatan_motor[] = {1000, 1200, 1500, 1800, 2000, 2200, 2500, 2800, 3000};

                aktifkan_motor(kecepatan_motor[level_kekeruhan], 60);

                printf("Jeda selama 2 menit untuk pembuangan air kotor.\n");
                kontrol_klep_pembuangan_air_kotor();

                aktifkan_motor(2000, 3);

                kontrol_klep_pengisian_air();

                aktifkan_motor(kecepatan_motor[level_kekeruhan], 60);

                kontrol_klep_pembuangan_air_kotor();

                aktifkan_motor(2000, 3);

                printf("Proses mencuci selesai.\n");
                break;
            
        }

    } while (pilihan != 2);

    return 0;
}
