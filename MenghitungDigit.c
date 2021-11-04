#include <stdio.h>
int main(){
    long a,n=0;
    scanf("%ld",&a);
    while(a!=0){
        a=a/10;
        n++;}
 
    printf("%ld\n",n);
return 0;
}