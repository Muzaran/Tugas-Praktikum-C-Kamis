#include <stdio.h>

int main() {
    // Mendeklarasikan variabel untuk menyimpan jumlah uang, persentase bunga, dan jumlah bulan
    double uang;
    int persentaseBunga, jumlahBulan;

    // Meminta pengguna untuk memasukkan jumlah uang awal
    printf("Masukkan jumlah uang awal (Rp.): ");
    scanf("%lf", &uang);

    // Meminta pengguna untuk memasukkan persentase bunga per bulan
    printf("Masukkan persentase bunga per bulan (contoh: 2 untuk 2%%): ");
    scanf("%d", &persentaseBunga);

    // Meminta pengguna untuk memasukkan jumlah bulan
    printf("Masukkan jumlah bulan: ");
    scanf("%d", &jumlahBulan);

    // Menghitung jumlah uang setelah sejumlah bulan
    for (int bulan = 1; bulan <= jumlahBulan; ++bulan) {
        uang += uang * (persentaseBunga / 100.0);  // Menambahkan bunga ke saldo uang
    }

    // Menampilkan hasil
    printf("Jumlah uang setelah %d bulan: Rp. %.2f\n", jumlahBulan, uang);

    return 0;
}
