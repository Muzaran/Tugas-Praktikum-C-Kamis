#include <stdio.h>

int main() {
    char A[7] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int flag = 0;

    // Periksa apakah ada huruf yang sama di dalam array A
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (A[i] == A[j]) {
                flag = 1;
                printf("ADA: %c\n", A[i]);
            }
        }
    }

    // Jika tidak ada huruf yang sama
    if (flag == 0) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
