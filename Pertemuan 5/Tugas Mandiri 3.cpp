#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya;

    printf("Masukkan jam masuk: ");
    scanf("%d", &jam_masuk);

    printf("Masukkan jam keluar: ");
    scanf("%d", &jam_keluar);

    lama_parkir = jam_keluar - jam_masuk;

    if (lama_parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;
    }

    printf("Lama parkir: %d\n", lama_parkir);
    printf("Biaya: %d\n", biaya);

    return 0;
}
