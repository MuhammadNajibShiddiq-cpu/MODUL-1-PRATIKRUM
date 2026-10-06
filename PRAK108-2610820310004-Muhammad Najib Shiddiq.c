#include <stdio.h>

int main()
{
    int putaran = 5;
    float jarak = 14;
    float phi = 3.14;

    printf("Diketahui :\n");
    printf("Pak DengkleK mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak DengkleK = %.0f Kilometer\n", jarak);

    float keliling = jarak / putaran;
    float jari_jari = keliling / (2 * phi);

    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak DengkleK adalah %.2f Kilometer\n", jari_jari);

    return 0;
}