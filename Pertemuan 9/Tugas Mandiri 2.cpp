 #include <stdio.h>

int main() {
    // Mendeklarasikan array satu dimensi dengan 10 elemen
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;

    // Menginput sebuah karakter (C)
    printf("Masukkan karakter: ");
    scanf(" %c", &C); // Spasi sebelum %c untuk membersihkan newline dari buffer

    // Mengecek apakah karakter tersebut ada di dalam array
    int ada = 0; // 0 berarti tidak ada, >0 berarti jumlah kemunculan karakter
    printf("\n");

    for (int i = 0; i < 10; ++i) {
        if (A[i] == C) {
            ada++;
        }
    }

    if (ada > 0) {
        printf("ADA\n%d\n", ada);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
