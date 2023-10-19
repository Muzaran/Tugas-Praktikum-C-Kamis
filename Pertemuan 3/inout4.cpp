#include <stdio.h>

 int main()
 {
   char nim[10], nama[30]; float nilai;
   printf("INPUT DATA MAHASISWA\n");
   printf("NIM: "); 
   scanf("%s", &nim); 
   fflush(stdin);
   printf("NAMA: "); 
   gets(nama);

   printf("NILAI :");
   scanf("%f", &nilai);

   //tampilkan
   printf("\nNIM: %s", nim);  
   printf("\nNAMA: %s", nama);
   printf("\nNILAI: %f", nilai);
   printf("\nNILAI (Pembulatan) : %.2f", nilai);
   return 0;
 }