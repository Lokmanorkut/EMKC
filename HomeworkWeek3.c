#include <stdio.h>
int main() {
    int kisiSayisi=5;
    char isim[50];
    float boy, kilo;
    printf("VKi hesaplayici");
    for(int i=0; i<kisiSayisi; i++) {
        printf("\nLütfen isminizi, boyunuzu (cm) ve kilonuzu (kg) giriniz:\n");
        printf("Örnek Ahmet 180 75\n");
        int result=scanf("%49s %f %f", isim, &boy, &kilo);

        float boyMeter=boy/100.0;
        float vki=kilo/(boyMeter*boyMeter);
        printf("\n✅ **%s** isimli kişinin Kitle İndeksi (VKİ): **%.2f**\n", isim, vki);
}
 return 0;
}