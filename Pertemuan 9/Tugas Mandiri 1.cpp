 #include <stdio.h>

int main() {
    // Mendeklarasikan array satu dimensi dengan 11 elemen
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;

    // Menginput sebuah nilai integer (N)
    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    // Mengecek apakah ada isi array yang nilainya sama dengan N
    int ada = 0; // 0 berarti tidak ada, 1 berarti ada
    printf("\n");

    for (int i = 0; i < 11; ++i) {
        if (A[i] == N) {
            ada = 1;
            printf("ADA\nLokasi bilangan yang sama yaitu array : %d\n", i);
        }
    }

    if (!ada) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
