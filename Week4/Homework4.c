#include <stdio.h>


int main() {
    char name[50];
    char surname[50];
    int choice;
    float r,n1,n2;
    printf("Lutfen Adinizi ve Soyadinizi Giriniz: \n");
    scanf("%49s %49s", name, surname);
    printf("Hosgeldin, %s %s!\n", name, surname);

    while(1){
    printf("******MENU******\n");
    printf("1. Daire Alan\n");
    printf("2. Daire Cevre\n");
    printf("3. Hesap Makinesi\n");
    printf("4. Cikis(q)\n");

    printf("Lutfen seciminizi yapiniz: ");
    scanf("%d", &choice);

    if (choice==1)
    {
        printf("Dairenin yaricapini giriniz: ");
        scanf("%f", &r);
        printf("Dairenin alani: %.2f\n", 3.14*r*r);
    }else if (choice==2)
    {
        printf("Dairenin yaricapini giriniz: ");
        scanf("%f", &r);
        printf("Dairenin cevresi: %.2f\n", 2*3.14*r);
    }else if (choice==3){
        int ch2;
        printf("---Hesap Makinesi Menu---\n");
        printf("1. Toplama\n");
        printf("2. Cikarma\n");
        printf("3. Carpma\n");
        printf("4. Bolme\n");
        printf("5. Mod Alma\n");
        printf("Lutfen bir islem seciniz: ");
        scanf("%d", &ch2);

       if (ch2>=1&&ch2<=5)
        {
            printf("Birinci sayiyi giriniz: ");
            scanf("%f", &n1);
            printf("Ikinci sayiyi giriniz: ");
            scanf("%f", &n2);
        }
            switch (ch2) {
                case 1:
                    printf("Sonuc: %.2f\n", n1 + n2);
                    break;
                case 2:
                    printf("Sonuc: %.2f\n", n1 - n2);
                    break;
                case 3:
                    printf("Sonuc: %.2f\n", n1 * n2);
                    break;
                case 4:
                    if (n2 == 0)
                        printf("Hata! 0'a bolunemez.\n");
                    else
                        printf("Sonuc: %.2f\n", n1 / n2);
                    break;
                case 5:
                    printf("Sonuc: %d\n", (int)n1 % (int)n2);
                    break;
                default:
                    printf("Gecersiz islem!\n");
            }
        }
    else if (choice==4||choice=='q'){
        printf("Cikis yapiliyor. Hosca kalin, %s %s!\n", name, surname);
        break;}
        else{
            printf("Gecersiz secim! Lutfen tekrar deneyiniz.\n");
        }
    }
                
                
     return 0;   
    }
    







