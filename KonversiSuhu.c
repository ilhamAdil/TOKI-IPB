#include <stdio.h>
int main()
{
    long c;
    double f;
    scanf("%ld",&c);
    c*=1.0;
    f=c*9.0/5.0+32.0;
    printf("%.2lf\n",f);
    return 0;
}