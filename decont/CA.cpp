#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
using namespace std;

void AfisareMeniu()
{
    printf("1.Introdu date.\n");
    printf("2.Cheltuieli Romania.\n");
    printf("3.Terminare.\n");
}

void IntroducereDate()
{
    int a;
    char s[100];
    printf("Introduceti nr de soferi:\n");
    scanf("%d",&a);
    printf("Introduceti locul plecarii:\n");
    fflush(stdin);
    gets(s);
}

void CheltuieliRomania()
{
    float pret_rovi,tot_rovi,a;
    int b,c;
    printf("Introduceti nr de vignete:\n");
    scanf("%d",&a);
    printf("Introdu pret rovi:\n");
    scanf("%g",&pret_rovi);
    tot_rovi=pret_rovi*a;

}

int main()
{
    char text[100];
    int x;
    do{
       AfisareMeniu();
       printf("Introdu optiunea!\n");
       scanf("%d",&x);
       switch (x){
            case 0:
                break;
            case 1:
                IntroducereDate();
                break;
            case 2:
                CheltuieliRomania();
                break;}

    }while (x!=3);
    printf("Bye");
    getch();
}
