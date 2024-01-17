#include <stdio.h>

int main() {
    // Loop untuk mencetak deret angka 2 pangkat n (2^n)
    for (int i = 0; i <= 10; ++i) {
        printf("%d ", 1 << i);
    }

    printf("\n");

    return 0;
}
