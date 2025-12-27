#include <stdio.h>

void matrisAl(int matris[][10], int satir, int sutun) {
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
}

void matrisTopla(int A[][10], int B[][10], int C[][10], int satir, int sutun) {
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void matrisCikar(int A[][10], int B[][10], int C[][10], int satir, int sutun) {
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}



int main() {
    int satir, sutun;
    int A[10][10], B[10][10], sonuc[10][10];
    int secim;

    
    printf("Matrisin satir sayisini giriniz: ");
    scanf("%d", &satir);

    printf("Matrisin sutun sayisini giriniz: ");
    scanf("%d", &sutun);
    
    printf("\n1. Matris elemanlarini giriniz:\n");
    matrisAl(A, satir, sutun);

    
    printf("\n2. Matris elemanlarini giriniz:\n");
    matrisAl(B, satir, sutun);

    
    printf("\nToplama icin 1, Cikarma icin 2 giriniz: ");
    scanf("%d", &secim);

    if (secim == 1) {
        matrisTopla(A, B, sonuc, satir, sutun);
        printf("\nToplama Sonucu:\n");
    } 
    else if (secim == 2) {
        matrisCikar(A, B, sonuc, satir, sutun);
        printf("\nCikarma Sonucu:\n");
    } 
    else {
        printf("Gecersiz secim!\n");
        return 0;
    }
    
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }

    return 0;
}





