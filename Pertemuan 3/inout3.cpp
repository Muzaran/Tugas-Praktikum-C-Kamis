#include <stdio.h>

 int main()
 {
   char nim[10], nama[30];
   printf("INPUT DATA MAHASISWA\n");
   printf("NIM: "); 
   scanf("%s", &nim); 
   fflush(stdin);
   printf("NAMA: "); 
   gets(nama);

   //tampilkan
   printf("\nNIM: %s", nim);  
   printf("\nNAMA: %s", nama);
   return 0;
 }