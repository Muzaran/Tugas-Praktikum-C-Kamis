#include <stdio.h>

int main() {
    // Mendeklarasikan variabel untuk menyimpan nilai
    int nilai;

    // Meminta pengguna untuk memasukkan nilai
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &nilai);

    // Memeriksa apakah nilai ganjil atau genap
    if (nilai > 0) {
        if (nilai % 2 == 0) {
            printf("Bilangan tersebut adalah GENAP\n");
        } else {
            printf("Bilangan tersebut adalah GANJIL\n");
        }
    } else {
        printf("Masukkan bilangan bulat positif!\n");
    }

    
    getchar(); 

    return 0;
}
