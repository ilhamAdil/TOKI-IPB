#include <stdio.h>
int main(){
    int a;
    long b;
    double c;
    scanf("%d %ld", &a,&b);
    scanf("%lf", &c);
    printf("%d %.2lf %ld\n", a, c, b);
    return 0;
}