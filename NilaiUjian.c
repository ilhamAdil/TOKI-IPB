#include <stdio.h>
int main(){
    float a,b,c;
    float n;
    scanf("%f %f %f",&a,&b,&c);
    n=(a+b+c)/3.0;
if (n>=60)
    printf("%.2fBAIK",n);
else if(n>=30)
    printf("%.2fCUKUP",n);
else if(n>=0)
    printf("%.2fKURANG",n);
return 0;
}