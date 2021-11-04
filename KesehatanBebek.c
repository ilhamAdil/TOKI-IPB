#include <stdio.h>
int main(){
    long b,max=0;
    long long min=1000000000000000000;
    while(b!=-1){
        scanf("%ld",&b);
        if(b<min && b!=0 && b!=-1){
        min=b;}
        if(b>max && b!=0 && b!=-1){
        max=b;}
        if(b==0 || b==-1){
            printf("%lld %ld\n",min,max);
        min=1000000000000000000;
        max=0;}
    }
return 0;
}