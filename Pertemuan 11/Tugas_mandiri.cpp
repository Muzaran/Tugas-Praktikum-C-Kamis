#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int total = 0;
    float rataRata;
    int jumlahB = 0, jumlahC = 0;

    // Menghitung rata-rata nilai mahasiswa
    for (int i = 0; i < 12; ++i) {
        total += A[i];
    }
    rataRata = (float)total / 12;

    // Memindahkan nilai ke array B atau C
    for (int i = 0; i < 12; ++i) {
        if (A[i] > rataRata) {
            B[jumlahB] = A[i];
            jumlahB++;
        } else {
            C[jumlahC] = A[i];
            jumlahC++;
        }
    }

    // Menampilkan isi array A
    printf("Array A: ");
    for (int i = 0; i < 12; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan isi array B
    printf("Array B: ");
    for (int i = 0; i < jumlahB; ++i) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Menampilkan isi array C
    printf("Array C: ");
    for (int i = 0; i < jumlahC; ++i) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
