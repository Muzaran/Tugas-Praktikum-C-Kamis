#include <stdio.h>

int main() {
    // Mendeklarasikan variabel untuk menyimpan masukan
    int kode;
    char jenis;
    float harga, diskon, hargaSetelahDiskon;

    // Meminta pengguna untuk memasukkan data
    printf("Masukkan Kode: ");
    scanf("%d", &kode);

    printf("Masukkan Jenis (A, B, atau C): ");
    scanf(" %c", &jenis);

    printf("Masukkan Harga: ");
    scanf("%f", &harga);

    // Menghitung diskon berdasarkan jenis barang
    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis barang tidak valid.\n");
            return 1; // Keluar program dengan kode kesalahan
    }

    // Menghitung harga setelah didiskon
    hargaSetelahDiskon = harga - (harga * diskon);

    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}
