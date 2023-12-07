#include <stdio.h>

int main() {
    // Array X
    int X[4] = {12, 2, 7, 10};

    // Array Y
    int Y[6] = {15, 4, 16, 20, 25, 30};

    // Array Z
    int Z[10];
    
    // Menggabungkan nilai yang lebih kecil dari 10 dari array X
    int index_Z = 0;
    for (int i = 0; i < 4; i++) {
        if (X[i] < 10) {
            Z[index_Z] = X[i];
            index_Z++;
        }
    }

    // Menggabungkan nilai dari lokasi ganjil array Y
    for (int i = 1; i < 6; i += 2) {
        Z[index_Z] = Y[i];
        index_Z++;
    }

    // Menampilkan isi array Z
    printf("Isi array Z: ");
    for (int i = 0; i < index_Z; i++) {
        printf("%d ", Z[i]);
    }

    return 0;
}
