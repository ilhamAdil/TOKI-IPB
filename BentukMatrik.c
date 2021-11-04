#include <stdio.h>
int main(){
    long a,b,i,j;
    scanf("%ld %ld",&a,&b);
    long c=0;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            printf("%ld",c++);
            if(c==10)
                c=0;
            if(j==b)
            printf("\n");
            else printf(" ");
        }
    }
    return 0;
}