#include <stdio.h>

const char *jenis_transportasi[] = {"Kendaraan Pribadi", "Bus", "Kendaraan sewa"};
const char *destinasi_wisata[] = {"Hutan Pinus Malino", "Pantai Bira", "Toraja"};

void hitung_jarak_tempuh(double *jarak, char lokasi_awal[], char destinasi_wisata[]){
    // Proses penghitungan jarak tempuh antara lokasi awal dan destinasi wisata
    // *jarak = ;
}

void hitung_biaya_transportasi(double jarak, char jenis_transportasi[]){
    // Proses perhitungan biaya transportasi berdasarkan jarak dan jenis transportasi yang digunakan
    // *biaya_transportasi = /*perhitungan biaya transportasi */ ;
}

void pilih_jenis_transportasi(){
    printf("Silahkan memilih jenis transportasi!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i+1, jenis_transportasi[i]);
    }
}

void pilih_destinasi_wisata(){
    printf("Silahkan memilih destinasi wisata!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i+1, destinasi_wisata[i]);
        
    }
}

int main()
{
    pilih_destinasi_wisata();
    
    pilih_jenis_transportasi();
    

    return 0;
}
