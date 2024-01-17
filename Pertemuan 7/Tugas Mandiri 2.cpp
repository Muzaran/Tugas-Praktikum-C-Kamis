#include <stdio.h>

int main() {
    // Mendeklarasikan array satu dimensi dengan 11 elemen
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    
    // Menginput data dan menyimpan nilai genap ke dalam array A
    int count = 0; // Variabel untuk menghitung jumlah elemen yang sudah diisi
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        if (data[i] % 2 == 0) {
            A[count] = data[i];
            count++;
        }
    }

    // Mencetak isi array A yang berisi nilai genap
    printf("Isi array A yang berisi nilai genap:\n");
    for (int i = 0; i < count; ++i) {
        printf("%d ", A[i]);
    }

    return 0;
}
