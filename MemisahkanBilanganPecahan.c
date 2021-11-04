#include <stdio.h>
#include <math.h>
int main()
{
    double x,b;
    long a;
    scanf("%lf",&x);
    a=floor(x);
    b=x-a;
    printf("%ld %.5lf\n",a,b);
}