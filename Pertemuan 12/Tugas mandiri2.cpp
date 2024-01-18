#include <stdio.h>

int main() {
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T','A','\0'};
    int count[26] = {0};  // Array untuk menghitung jumlah setiap huruf
    char mostFrequentChar;
    int maxCount = 0;

    // Menghitung jumlah setiap huruf di dalam array A
    for (int i = 0; i < 11; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
        }
    }

    // Mencari huruf yang paling sering muncul
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentChar = 'A' + i;
        }
    }

    // Menampilkan hasil
    printf("Huruf yang terbanyak: %c\n", mostFrequentChar);
    printf("Jumlah huruf terbanyak: %d\n", maxCount);

    return 0;
}
