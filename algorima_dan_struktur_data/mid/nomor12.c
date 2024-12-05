#include <stdio.h>

int main()
{
    int arr[] = {10, 9, 12, 25, 5, 15, 33, 50, 4, 2, 7, 19};
    int x;
    int ketemu = 0;

    printf("Masukkan nilai yang anda cari : \n");
    scanf("%d", &x);

    for (int i = 0; i < 12; i++)
    {
        if (arr[i] == x && ketemu != 1)
            ketemu = 1;
    }

    if (ketemu != 1)
    {
        printf("Nilai tidak ditemukan");
    }
    else
        printf("Ketemu");

    return 0;
}
