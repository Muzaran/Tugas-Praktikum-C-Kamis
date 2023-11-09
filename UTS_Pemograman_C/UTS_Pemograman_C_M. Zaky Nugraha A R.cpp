#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MOTOR_UTAMA 1
#define MOTOR_KLEP_PENGISIAN 2
#define MOTOR_KLEP_PEMBUANGAN 3

// Fungsi untuk mengendalikan motor
void putar_motor(int motor, int kecepatan, int waktu, const char *aksi) {
    printf("Langkah: %s - Motor %d diputar dengan kecepatan %d rpm selama %d menit\n", aksi, motor, kecepatan, waktu);
    // Logika untuk mengaktifkan motor (tambahan perlu disesuaikan)
}

// Fungsi untuk mengendalikan klep
void kontrol_klep(int klep, int status, const char *aksi) {
    if (status) {
        printf("Langkah: %s - Klep %d terbuka\n", aksi, klep);
        // Logika untuk membuka klep (tambahan perlu disesuaikan)
    } else {
        printf("Langkah: %s - Klep %d tertutup\n", aksi, klep);
        // Logika untuk menutup klep (tambahan perlu disesuaikan)
    }
}

// Fungsi untuk membaca nilai kekeruhan air dari sensor turbidimeter
int baca_sensor_turbidimeter() {
    // Simulasi pembacaan nilai dari sensor turbidimeter (gunakan nilai default atau acak)
    return rand() % 50 + 1;
}

// Fungsi untuk menyelesaikan proses mencuci
void selesai_mencuci() {
    printf("Proses mencuci selesai\n");
}

int main() {
    int ntu_values[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int ntu;

    // Program otomatis tanpa inputan kekeruhan air
    printf("Program mencuci dimulai secara otomatis\n");

    // 1. Tombol Start ditekan maka motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    kontrol_klep(MOTOR_KLEP_PENGISIAN, 1, "Pengisian Air Awal");
    sleep(2 * 60);

    // 2. Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air utama
    ntu = baca_sensor_turbidimeter();
    printf("Level kekeruhan air utama: %d NTU\n", ntu);

    // 3. Motor listrik berputar sesuai level kekeruhan air
    putar_motor(MOTOR_UTAMA, ntu <= 6 ? 800 : (ntu <= 12 ? 1000 : 1200), 10, "Pencucian Utama");

    // 4. Motor listrik utama berhenti pada setiap pertengahan waktu
    putar_motor(MOTOR_UTAMA, 0, 5, "Berhenti pada Setiap Pertengahan Waktu");

    // 5. Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis
    kontrol_klep(MOTOR_KLEP_PEMBUANGAN, 1, "Pembuangan Air Kotor");
    sleep(2 * 60);

    // 6. Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    putar_motor(MOTOR_UTAMA, 2000, 3, "Pengeringan");

    // 7. Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    kontrol_klep(MOTOR_KLEP_PENGISIAN, 1, "Pengisian Air Kedua");
    sleep(2 * 60);

    // 8. Motor listrik utama berputar selama sisa waktu mencuci
    putar_motor(MOTOR_UTAMA, ntu <= 6 ? 800 : (ntu <= 12 ? 1000 : 1200), 7, "Pencucian Lanjutan");

    // 9. Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    kontrol_klep(MOTOR_KLEP_PEMBUANGAN, 1, "Pembuangan Air Kotor Kedua");
    sleep(2 * 60);

    // 10. Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    putar_motor(MOTOR_UTAMA, 2000, 3, "Pengeringan Lanjutan");

    // Selesai mencuci
    selesai_mencuci();

    return 0;
}
