//Ady Ulil Amri D121231080
#include <stdio.h>

const char *jenis_transportasi[] = {"Kendaraan Pribadi", "Bus", "Kendaraan sewa"};
const char *destinasi_wisata[] = {"Hutan Pinus Malino", "Pantai Bira", "Toraja"};
const char *jenis_aktivitas[] = {"Pusat oleh-oleh", "Wisata Kuliner", "Wahana/Fasilitas Hiburan Lainnya"};
double jarak_tempuh, biaya_transportasi, biaya_akomodasi, aktivitas, total_biaya;
const char *lokasi_awal[] = {"Makassar", "Gowa", "Maros", "Takalar"};

void pilih_destinasi_wisata(){
    printf("Silahkan memilih destinasi wisata!(1/2/3)\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i+1, destinasi_wisata[i]);
    }
}

void pilih_lokasi_awal(){
    printf("Silahkan memilih lokasi awal anda!(1/2/3/4)\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i+1, lokasi_awal[i]);
    }
}

void pilih_jenis_transportasi(){
    printf("Silahkan memilih jenis transportasi(1/2/3)!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i+1, jenis_transportasi[i]);
    }
}

void pilih_jenis_aktivitas(){
    printf("Silahkan memilih jenis aktifitas!(1/2/3)\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i+1, jenis_aktivitas[i]);
    }
}

double hitung_jarak_tempuh(int a, int b){
    // Proses penghitungan jarak tempuh antara lokasi awal dan destinasi wisata
    // *jarak_tempuh = ;
    // return jarak_tempuh
}

double hitung_biaya_transportasi(double jarak_tempuh, int b){
    // Proses perhitungan biaya transportasi berdasarkan jarak dan jenis transportasi yang digunakan
    // *biaya_transportasi = /*perhitungan biaya transportasi */ ;
    return biaya_transportasi;
}

double hitung_waktu_aktivitas(char jenis_aktivitas[]) {
    // Proses penghitungan waktu yang diperlukan untuk setiap aktivitas
    // Return waktu yang diperlukan untuk aktivitas tersebut
    return /* waktu yang diperlukan */;
}

double hitung_biaya_akomodasi(char destinasi_wisata[]) {
    // Proses pencarian akomodasi terbaik di destinasi wisata
    // biaya_akomodasi = /* cari akomodasi terbaik */;
    return biaya_akomodasi;
}

double hitung_total_biaya(double biaya_transportasi, double biaya_akomodasi) {
    // Proses penghitungan total biaya perjalanan, termasuk biaya transportasi dan akomodasi
    // Return total biaya perjalanan
    return /* total biaya perjalanan */;
}

void tampilkan_rencana_perjalanan(int a, int b){
    // Proses menampilkan rencana perjalanan ke layar
    printf("RENCANA PERJALANAN\n");
    printf("Destinasi Wisata: %s\n", destinasi_wisata[a]);
    // printf("Jarak Tempuh: %.2f km\n", jarak_tempuh);
    printf("Jenis Transportasi: %s\n", jenis_transportasi[b]);
    // printf("Akomodasi: %s\n", akomodasi);
    // printf("Aktivitas: %s\n", aktivitas);
    // printf("Total Biaya: %.2f\n", total_biaya);
}

int main()
{
    int input_destinasi, input_transportasi, input_lokasi, input_aktivitas;
    pilih_destinasi_wisata();
    scanf("%d", &input_destinasi);

    pilih_lokasi_awal();
    scanf("%d", &input_lokasi);

    pilih_jenis_transportasi();
    scanf("%d", &input_transportasi);

    pilih_jenis_aktivitas();
    scanf("%d", &input_aktivitas);

    // jarak_tempuh = hitung_jarak_tempuh(input_lokasi, input_transportasi);
    // biaya_transportasi = hitung_biaya_transportasi(jarak_tempuh, input_transportasi);
    biaya_akomodasi = hitung_biaya_akomodasi(input_destinasi);
    aktivitas = hitung_waktu_aktivitas(input_aktivitas);
    total_biaya = hitung_total_biaya(biaya_transportasi, biaya_akomodasi);
    tampilkan_rencana_perjalanan(input_destinasi-1, input_transportasi-1);

    return 0;
}
