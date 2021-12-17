#include<stdio.h>
#include<conio.h>
#include<math.h>

/*
ax^2 + bx + c þeklindeki denklem
*/

int main() {
    
    int a,b,c;
    float x1,x2;
    float delta;
    
    printf("Denklemin a'sini giriniz:");
    scanf("%d",&a);
    printf("Denklemin b'sini giriniz:");
    scanf("%d",&b);
    printf("Denklemin c'sini giriniz:");
    scanf("%d",&c);
    
    delta = b*b -4*a*c;
    x1 = (-b + (sqrt(delta))) / 2*a;
    x2 = (-b - (sqrt(delta))) / 2*a;
    printf("Denklemin 1.koku %.2f, 2.koku %.2f'dir",x1,x2);
    
    
    
    
    
    
    getch();
    return 0;
}
