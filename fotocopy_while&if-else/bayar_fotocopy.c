#include <stdio.h>

int main(){
    int i, j_orang, j_lembar, tot_bayar;
    
    printf("=====DATA PEMBAYARAN PENGUNJUNG FOTOCOPY=====");
    printf("\n\n");
    printf("Masukkan jumlah orang : ");
    scanf("%d", &j_orang);
    
    i=1;
    while(i <= j_orang){
        printf("\nOrang ke-%d", i);
        printf("\nJumlah lembar fotocopy : ");
        scanf("%d", &j_lembar);
        if(j_lembar < 100){
            tot_bayar = j_lembar*500;
        } else {
            tot_bayar = j_lembar*400;
        }
        printf("Harus bayar : Rp%d\n", tot_bayar);

        i = i+1;
    }
    return 0;
}