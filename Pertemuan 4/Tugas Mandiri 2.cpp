#include <stdio.h>

int main() {
    // Mendeklarasikan variabel untuk menyimpan nilai
    int nilai;

    // Meminta pengguna untuk memasukkan nilai
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &nilai);

    // Memeriksa apakah nilai lebih besar dari 50
    if (nilai > 50) {
        nilai = nilai - 25;
    } else {
        nilai = nilai + 10;
    }

    // Menampilkan nilai yang telah dimodifikasi
    printf("Nilai setelah modifikasi: %d\n", nilai);

    // Menambahkan getchar() untuk memberikan jeda sebelum menutup program
    getchar();

    // input 30 hasilnya = 40
    // input 50 hasilnya = 60
    // input 65 hasilnya = 40

    return 0;
}
