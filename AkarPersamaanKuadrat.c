#include <stdio.h>
int main(){
    double a,b,c,D;
    scanf("%lf %lf %lf",&a,&b,&c);
    D=(b*b)-(4*a*c);
if(D>0){
    printf("2\n");}
else if(D==0){
    printf("1\n");}
else if(D<0){
    printf("0\n");}
    return 0;
}   