#include <stdio.h>
int main(){
    long a,i,j;
    scanf("%ld",&a);
    for(i=1;i<=a;i++){
        for(j=i;j<=a;j++){
        printf("*");
        if(j==a)
            printf("\n");
        }
    }
    return 0;
}