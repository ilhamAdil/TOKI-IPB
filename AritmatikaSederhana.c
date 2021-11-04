#include <stdio.h>
int main(){
    long a,b;
    double c,d;
    scanf("%ld %ld",&a,&b);
    scanf("%lf",&c);
    d=(a*1.0)/(b*1.0)+c;
    printf("%.2lf\n",d);
return 0;
}