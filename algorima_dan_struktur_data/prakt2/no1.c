#include <stdio.h>

//while
int main()
{
    int n;
    int jumlah = 0;
    int angka = 1;

    printf("input n!\n");
    scanf("%d", &n);

    //pakai while-do
    while (angka <= n)
    {
        jumlah = jumlah + angka;
        angka++;
    }

    // do
    // {
    //     jumlah = jumlah + angka;
    //     angka++;
    // } while (angka <= n);
    printf("jumlah deret = %d", jumlah);
    return 0;
}


