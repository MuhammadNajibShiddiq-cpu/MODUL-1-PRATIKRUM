#include <stdio.h>

int main()
{
    int jumlah_pasukan = 958730;

    char nama1[] = "Zilong";
    char nama2[] = "Ling";
    char nama3[] = "Baxia";
    char nama4[] = "Wanwan";
    char nama5[] = "Chang'e";

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlah_pasukan);
    printf("Jumlah pahlawan = 5\n");
    printf("Pahlawan Dragon Altar = %s, %s, %s, %s, dan %s\n", nama1, nama2, nama3, nama4, nama5);

    int hasil = jumlah_pasukan / 5;

    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", hasil);

    return 0;
}