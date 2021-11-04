#include <stdio.h>
int main()
{
    double a,b,c;
    double x,y,z,dapat;
    double p;
    double pajak,total;
     
    scanf("%lf %lf",&a,&x);
    scanf("%lf %lf",&b,&y);
    scanf("%lf %lf",&c,&z);
    scanf("%lf",&p);
 
    a*=x;
    b*=y;
    c*=z;
    dapat=a+b+c;    
    pajak=dapat*(p/100.0);
    total=dapat-pajak;
 
    printf("%.2lf %.2lf\n",pajak,total);
    return 0;
}