#include <stdio.h>

int main() {
    // Mendeklarasikan array satu dimensi dengan 11 elemen
    int A[11];
    
    // Menginput data dan menyimpan nilai sampai menemui 999 (EOD)
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int count = 0; // Variabel untuk menghitung jumlah elemen yang sudah diisi

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        if (data[i] == 999) {
            break; // Menghentikan loop jika menemui 999 (EOD)
        }

        if (data[i] % 2 != 0 && count < 11) {
            A[count] = data[i];
            count++;
        }
    }

    // Mencetak isi array A
    printf("Isi array A:\n");
    for (int i = 0; i < count; ++i) {
        printf("%d ", A[i]);
    }

    return 0;
}
