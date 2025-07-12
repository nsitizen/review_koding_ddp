#include <stdio.h>

int main(){
    int pembelian, bayar;

    printf("Masukkan nominal pembelian : ");
    scanf("%d", &pembelian);

    if (pembelian < 1000000){
        bayar = pembelian - (pembelian*0.05);
    } else {
        bayar = pembelian - (pembelian*0.1);
    }

    printf("Total yang harus dibayar : %d", bayar);
    
    return 0;
}