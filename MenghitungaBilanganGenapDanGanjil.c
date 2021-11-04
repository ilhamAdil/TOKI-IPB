#include <stdio.h>
int main(){
    long i,n,bil,ge=0,ga=0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%ld",&bil);
        if(bil%2==0)
            ge++;
        else ga++;}
    printf("%ld %ld\n",ge,ga);
   return 0;
}