#include <stdio.h>

int main() {
    int A[10]; // Mengubah ukuran array A menjadi 10
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int i, j = 0; // Menambah variabel j dan menginisialisasinya

    printf("Isi array A: ");
    for (i = 0; i < 15; i++) {
        if (data[i] > 9) {
            A[j] = data[i];
            printf("%4i", A[j]);
            j++;
            if (j == 10) {
                break; // Hentikan loop jika array A sudah penuh
            }
        }
    }

    return 0;
}
