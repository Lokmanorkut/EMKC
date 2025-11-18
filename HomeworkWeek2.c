#include <stdio.h>
#include <windows.h> //Utf-8 karakter desteğini sağlamak için ekledim yoksa ingilizce de yazılabilir.
int main() {
    SetConsoleOutputCP(CP_UTF8);//Utf-8 karakter desteği
    printf("Lütfen isminizi boyunuzu ve kilonuzu giriniz\n");
    char isim[50];
    float boy, kilo;
    scanf("%49s %f %f", isim, &boy, &kilo);
    float bci = kilo/(boy/100*boy/100);
    printf("Merhaba %s, Kütlen %.2f kg, boyun: %.2f cm ,Kitle İndeksiniz: %.2f\n", isim, kilo, boy, bci);
    return 0;
}