#include <stdio.h>
int main(){
    long i,angka,x=0;
    scanf("%ld",&angka);
    for(i=1;i<=angka;i++){
        if(angka%i==0){
        x++;
        }
    }
    if(x==1){
    x-=1;}  
    else x-=2;
     
    printf("%ld\n",x);
    return 0;
}       
        