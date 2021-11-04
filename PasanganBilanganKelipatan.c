#include <stdio.h>
 
int main(){
    long n,k=0;
    long i,j,x,y;
    scanf("%ld",&n);
    for(i=1,j=1;i<=n && j<=n;i++,j++){
        scanf("%ld %ld",&x,&y);
        if(x%y==0 || y%x==0){
        k++;}
    }
    printf("%ld\n",k);
return 0;
} 