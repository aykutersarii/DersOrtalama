#include<stdio.h>
#include<conio.h>

int main() {
    
    int a,b,c,d,e;
    float aritmetik;
    
    printf("5 Tane sayi giriniz:");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    aritmetik = (a+b+c+d+e)/5.0;
    printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f",aritmetik);
       
    
    getch();
    return 0;
    
}
