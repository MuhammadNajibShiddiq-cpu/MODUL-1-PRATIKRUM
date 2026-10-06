#include <stdio.h>

int main()
{
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int harga = 85000;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);

    int keliling = sisi1 + sisi2 + sisi3;

    printf("Keliling Tanah Pak DengkleK adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga);

    int biaya = keliling * harga;

    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak DengkleK adalah : Rp %d\n", biaya);

    return 0;
}