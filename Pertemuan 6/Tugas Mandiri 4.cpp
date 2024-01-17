#include <stdio.h>

int main() {
    // Mendeklarasikan variabel untuk menyimpan kecepatan dan waktu
    int kecepatan, waktu;

    // Meminta pengguna untuk memasukkan kecepatan
    printf("Masukkan kecepatan sepeda (meter/detik): ");
    scanf("%d", &kecepatan);

    // Meminta pengguna untuk memasukkan waktu
    printf("Masukkan waktu bersepeda (detik): ");
    scanf("%d", &waktu);

    // Menghitung jarak yang ditempuh: Jarak = Kecepatan x Waktu
    int jarak = kecepatan * waktu;

    // Menampilkan hasil
    printf("Jarak yang ditempuh setelah bersepeda selama %d detik: %d meter\n", waktu, jarak);

    return 0;
}
