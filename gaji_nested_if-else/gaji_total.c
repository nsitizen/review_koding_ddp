#include <stdio.h>

int main () {
    int golongan, jam_kerja, gaji_pokok, tunjangan, gaji_total;

    printf("Masukkan golongan pekerjaan : ");
    scanf("%d", &golongan);

    if (golongan == 1){
        gaji_pokok = 2000000;
    }
    if (golongan == 2){
        gaji_pokok = 2500000;
    }
    if (golongan == 3){
        gaji_pokok = 3000000;
    }

    printf("Masukkan total jam kerja : ");
    scanf("%d", &jam_kerja);

    if (jam_kerja >= 40){
        tunjangan = jam_kerja*12000;
    } else {
        if (jam_kerja >= 20){
            tunjangan = jam_kerja*10000;
        } else {
            tunjangan = jam_kerja*8000;
        }
    }

    gaji_total = gaji_pokok + tunjangan;

    printf("\nGaji pokok : %d\n", gaji_pokok);
    printf("Tunjangan  : %d\n", tunjangan);
    printf("Gaji total : %d", gaji_total);

    return 0;
}