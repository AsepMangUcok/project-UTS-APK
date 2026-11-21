#include <stdio.h>

int main() {
    int total_murid, jumlah_kelompok;

    printf("Ada berapa murid di kelas? ");
    scanf("%d", &total_murid);

    printf("Mau bikin berapa kelompok? ");
    scanf("%d", &jumlah_kelompok);

    int anggota_dasar = total_murid / jumlah_kelompok;
    int sisa_murid = total_murid % jumlah_kelompok;

    printf("\nHASIL PEMBAGIAN KELOMPOK\n");
    for (int i = 1; i <= jumlah_kelompok; i++) {
        int jumlah_anggota = anggota_dasar + (i <= sisa_murid);
        printf("Kelompok %d : berisi %d anggota\n", i, jumlah_anggota);
    }

    return 0;
}