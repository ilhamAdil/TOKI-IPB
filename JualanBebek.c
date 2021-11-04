#include <stdio.h>
int main(){
    float a,b,c,d;
    float e,f;
    float x1,x2,x3,x4;
    float harga;
     
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f %f",&e,&f);
     
    x1=a*e;
    x2=b*(e+f);
    x3=c*(e+f+f);
    x4=d*(e+f+f+f);
    harga=x1+x2+x3+x4;
     
    printf("%.2f",harga);
     
    return 0;
}