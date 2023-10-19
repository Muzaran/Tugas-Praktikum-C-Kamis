#include <stdio.h>
#define PHI 3.14 // konstanta

 int main()
 {
   float jari;
   float volume;

   printf("Program Penghitung Volume Bola\n\n");
   printf("Input Jari-jari bola (cm) : ");
   scanf("%f", &jari); 


    //hitung volume
   volume = 4/3 * PHI * jari * jari * jari;


   //tampilkan
   printf("\nVolume bola dengan jari-jari %.2f cm adalah %.3f cm3.", jari, volume);
   return 0;
 }