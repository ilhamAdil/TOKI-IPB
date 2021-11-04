#include <stdio.h>
int main(){
    long a,b,c,n=0;
    scanf("%ld %ld",&a,&b);
    while(b>0){
        c=b%10;
        if(c==a){
            n+=1;}
        b=b/10;
    }
    if(n==0)
        printf("tidak ada\n");
    else
        printf("%ld\n",n);
    return 0;
}