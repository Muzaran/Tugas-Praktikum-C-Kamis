#include <stdio.h> 
main()
{
int A, B, C, max;
printf("Input 3 buah bilangan\n"); 
printf("Bilangan 1: "); scanf("%i", &A);
printf("Bilangan 2: "); scanf("%i", &B);
printf("Bilangan 3: "); scanf("%i", &C);
max = 0;
printf("\nBilangan terbesar: ");
if (A > max) { 
max = A;
}
if (B > max) { 
max = B;
}
if (C > max) { 
max = C;
}
printf("%i", max);
return 0;
}