#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MOTOR_UTAMA 1
#define MOTOR_KLEP_PENGISIAN 2
#define MOTOR_KLEP_PEMBUANGAN 3

// Deklarasi fungsi-fungsi
void putar_motor(int motor, int kecepatan, int waktu, const char *aksi);
void kontrol_klep(int klep, int status, const char *aksi);
int baca_sensor_turbidimeter();
void langkah_1();
void langkah_2();
void langkah_3();
void langkah_4();
void langkah_5();
void langkah_6();
void langkah_7();
void langkah_8();
void langkah_9();
void langkah_10();
void selesai_mencuci();

int main() {
    printf("Program mencuci dimulai secara otomatis\n");

    langkah_1();
    langkah_2();
    langkah_3();
    langkah_4();
    langkah_5();
    langkah_6();
    langkah_7();
    langkah_8();
    langkah_9();
    langkah_10();

    selesai_mencuci();

    return 0;
}

// Fungsi untuk mengendalikan motor
void putar_motor(int motor, int kecepatan, int waktu, const char *aksi) {
    printf("Langkah: %s - Motor %d diputar dengan kecepatan %d rpm selama %d menit\n", aksi, motor, kecepatan, waktu);
    // Logika untuk mengaktifkan motor
}

// Fungsi untuk mengendalikan klep
void kontrol_klep(int klep, int status, const char *aksi) {
    if (status) {
        printf("Langkah: %s - Klep %d terbuka\n", aksi, klep);
        // Logika untuk membuka klep
    } else {
        printf("Langkah: %s - Klep %d tertutup\n", aksi, klep);
        // Logika untuk menutup klep
    }
}

// Fungsi untuk membaca nilai kekeruhan air dari sensor turbidimeter
int baca_sensor_turbidimeter() {
    // Simulasi pembacaan nilai dari sensor turbidimeter (gunakan nilai default atau acak)
    return rand() % 50 + 1;
}

// Fungsi untuk langkah 1
void langkah_1() {
    kontrol_klep(MOTOR_KLEP_PENGISIAN, 1, "Pengisian Air Awal");
    sleep(2 * 60);
}

// Fungsi untuk langkah 2
void langkah_2() {
    int ntu = baca_sensor_turbidimeter();
    printf("Level kekeruhan air utama: %d NTU\n", ntu);
}

// Fungsi untuk langkah 3
void langkah_3() {
    int ntu = baca_sensor_turbidimeter();
    putar_motor(MOTOR_UTAMA, ntu <= 6 ? 800 : (ntu <= 12 ? 1000 : 1200), 10, "Pencucian Utama");
}

// Fungsi untuk langkah 4
void langkah_4() {
    putar_motor(MOTOR_UTAMA, 0, 5, "Berhenti pada Setiap Pertengahan Waktu");
}

// Fungsi untuk langkah 5
void langkah_5() {
    kontrol_klep(MOTOR_KLEP_PEMBUANGAN, 1, "Pembuangan Air Kotor");
    sleep(2 * 60);
}

// Fungsi untuk langkah 6
void langkah_6() {
    putar_motor(MOTOR_UTAMA, 2000, 3, "Pengeringan");
}

// Fungsi untuk langkah 7
void langkah_7() {
    kontrol_klep(MOTOR_KLEP_PENGISIAN, 1, "Pengisian Air Kedua");
    sleep(2 * 60);
}

// Fungsi untuk langkah 8
void langkah_8() {
    int ntu = baca_sensor_turbidimeter();
    putar_motor(MOTOR_UTAMA, ntu <= 6 ? 800 : (ntu <= 12 ? 1000 : 1200), 7, "Pencucian Lanjutan");
}

// Fungsi untuk langkah 9
void langkah_9() {
    kontrol_klep(MOTOR_KLEP_PEMBUANGAN, 1, "Pembuangan Air Kotor Kedua");
    sleep(2 * 60);
}

// Fungsi untuk langkah 10
void langkah_10() {
    putar_motor(MOTOR_UTAMA, 2000, 3, "Pengeringan Lanjutan");
}

// Fungsi untuk menyelesaikan proses mencuci
void selesai_mencuci() {
    printf("Proses mencuci selesai\n");
}
