#include <stdio.h>

int main() {
    // Mendeklarasikan array untuk menyimpan nilai mahasiswa
    int nilaiMahasiswa[10];

    // Meminta pengguna untuk memasukkan nilai mahasiswa
    for (int i = 0; i < 10; ++i) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilaiMahasiswa[i]);
    }

    // Mencetak daftar nilai mahasiswa yang lulus (nilai >= 60)
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; ++i) {
        if (nilaiMahasiswa[i] >= 60) {
            printf("Mahasiswa ke-%d: %d\n", i + 1, nilaiMahasiswa[i]);
        }
    }

    return 0;
}
