// Ady Ulil Amri kelas B D121231080
#include <stdio.h>

int main()
{
    int u, v;
    int hasil;

    printf("Nilai Terkecil dari 2 angka\n");
    printf("Masukkan 2 angka integer\n");

    scanf("%d %d", &u, &v);

    if (u == v)
        hasil = 1;
    else
        hasil = (u < v) ? 2 : 3;
    
    switch (hasil) {
        case 1:
            printf("Kedua angka sama\n");
            break;
        case 2:
            printf("Angka terkecil adalah %d\n", u);
            break;
        case 3:
            printf("Angka terkecil adalah %d\n", v);
            break;
        default:
            break;
    }
    return 0;
}
