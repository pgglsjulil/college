// Ady Ulil Amri D121231080
#include <stdio.h>

int main()
{
    int u, v, w;
    float rerata;

    printf("Menghitung nilai rata-rata dari 3 nilai bertipe integer dan output nilai rata-rata bertipe float\n");
    printf("Masukkan tiga nilai integer diantarai spasi\n");
    scanf("%d %d %d", &u, &v, &w);

    rerata = (u + v + w)/3;

    printf("rata-ratanya adalah %f", rerata);
    return 0;
}
