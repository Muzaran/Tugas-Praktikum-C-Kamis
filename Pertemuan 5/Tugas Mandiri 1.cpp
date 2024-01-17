#include <stdio.h>

int main() {
    // Mendeklarasikan variabel untuk menyimpan jam masuk dan jam pulang
    int jamMasuk, jamPulang;

    // Meminta pengguna untuk memasukkan jam masuk
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);

    // Meminta pengguna untuk memasukkan jam pulang
    printf("Masukkan jam pulang (1-12): ");
    scanf("%d", &jamPulang);

    // Menghitung lama bekerja
    int lamaBekerja;

    // Memeriksa apakah jam pulang lebih besar dari jam masuk
    if (jamPulang >= jamMasuk) {
        lamaBekerja = jamPulang - jamMasuk;
    } else {
        // Jika jam pulang melewati tengah malam (lebih kecil dari jam masuk)
        lamaBekerja = 12 - jamMasuk + jamPulang;
    }

    // Menampilkan hasil lama bekerja
    printf("Lama bekerja: %d jam\n", lamaBekerja);

    return 0;
}
