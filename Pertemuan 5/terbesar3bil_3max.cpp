#include <stdio.h> 
main()
{
int A, max;
printf("Input 3 buah bilangan\n"); 
printf("Bilangan 1: "); scanf("%i", &A); 
max = A;
printf("Bilangan 2: "); scanf("%i", &A);
if (A > max) { 
max = A;
}
printf("Bilangan 3: "); scanf("%i", &A); 
if (A > max) {
max = A;
}
printf("\nBilangan terbesar: %i", max); 
return 0;
}
