#include <stdio.h>

 int main()
 {
   int jari;
   float luas, keliling;

   printf("Input jari-jari lingkaran : ");
   scanf("%i", &jari); 


   luas = 3.14 * jari * jari;
   keliling = 2 * 3.14 * jari;


   //tampilkan
   printf("LUAS dan LINGKARAN");
   printf("\nJari-jari = %i", &jari);
   printf("\nLuas = %.3f", luas);
   printf("\nKeliling = %.2f", keliling);
   return 0;
 }