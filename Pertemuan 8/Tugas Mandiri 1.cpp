#include <stdio.h>

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int i;

    
    for (i = 0; i < 11; i++) {
        A[i] = data[i];
    }

    printf("\nIsi array A : ");
    for (i = 0; i < 11; i += 2) {
        printf("%4i", A[i]);
    }

    return 0;
}
