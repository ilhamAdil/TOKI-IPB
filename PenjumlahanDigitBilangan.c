#include <stdio.h>
int main(){
    long a,b,sum=0;
    scanf("%ld",&a);
    while(a>0){
        b=a%10;
        sum+=b;
        a=a/10;}
    printf("%ld\n",sum);
    return 0;
}