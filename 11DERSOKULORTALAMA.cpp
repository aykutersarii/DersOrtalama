#include<stdio.h>
#include<conio.h>

int main(){
    
    int vize1,vize2,final;
    float okulortalama;
    float dersort;
    printf("1.vize:");
    scanf("%d",&vize1);
    printf("2.vize:");
    scanf("%d",&vize2);
    printf("final:");
    scanf("%d",&final);
    printf("Universite ortalamanizi girin:");
    scanf("%f",&okulortalama);
    dersort = (vize1*3/10.0+vize2*3/10.0+final*4/10.0);
    
    if(dersort >= 90) {
         printf("AA ve Ders ortalamaniz: %f",dersort);
    }
    else if(dersort >= 85 && dersort < 90) {
         printf("BA ve Ders ortalamaniz: %f",dersort);
    }
    else if(dersort >= 80 && dersort < 85) {
         printf("BB ve Ders ortalamaniz: %f",dersort);
    }
    else if(dersort >= 75 && dersort < 80) {
         printf("CB ve Ders ortalamaniz: %f",dersort);
    }
    else if(dersort >= 70 && dersort < 75) {
         printf("CC ve Ders ortalamaniz: %f",dersort);
         
         if(okulortalama < 2.5) {
         printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
         }
    }
    else if(dersort >= 65 && dersort < 70){
         printf("DC ve Ders ortalamaniz: %f",dersort);
         
         if(okulortalama < 2.5) {
         printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
                         }
         }
                         
    else if(dersort >= 60 && dersort < 65){
         printf("DD ve Ders ortalamaniz: %f",dersort);
         
         if(okulortalama < 2.5) {
         printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
                         }
         }
    else {
         printf("FF ve Ders ortalamaniz: %f\n",dersort);
         printf("Dersten kaldiniz.");
         }
         
         
    
    getch();
    return 0;
}
