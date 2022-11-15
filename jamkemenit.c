#include<stdio.h>

int main ()
{
    int jam,menit= 60,hasil;

    printf("\n");
    printf("       KONVERSI JAM KE MENIT - C\n");
    printf ("---------------------------------\n");
    printf(" MASUKKAN JAM = ");
    scanf("%d",&jam);

    hasil = jam*menit;
    printf(" HASIL KONVERSI = %d MENIT, hasil");

    return 0;
}
