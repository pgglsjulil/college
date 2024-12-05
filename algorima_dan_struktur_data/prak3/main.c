#include <stdio.h>

void penentuan_gelar(float total_poin){
    const int max_poin = 24;
    if (total_poin >= max_poin * 3/4)
        printf("Anda berhasil mendapat gelar Grandmaster\n");
    else if (total_poin >= max_poin / 2)
        printf("Anda berhasil mendapat gelar Master\n");
    else
        printf("Anda belum berhasil mendapatkan gelar\n");
}

float hitung_poin(int x, int y, int z){
    float total_poin = x * 1 + y * 0.5 + z * 0;
    return total_poin;
}

int main()
{
    int menang, remis, kalah;
    float total_poin;

    printf("Program penentuan gelar pemain catur berdasarkan prestasi\n");

    do
    {
        printf("Masukkan jumlah menang, remis, serta kalah anda! (jumlahnya harus 24 ronde dan tidak negatif)\n");
        scanf("%d %d %d", &menang, &remis, &kalah);
    } while (menang + remis + kalah != 24 || menang < 0 || remis < 0 || kalah < 0);
    
    total_poin = hitung_poin(menang, remis, kalah);
    penentuan_gelar(total_poin);
    printf("Poin anda adalah %.2f\n", total_poin);

    return 0;
}
