#include <stdio.h>
int main(){
    int n,i,j;
    char c1,c2,c3;
    scanf("%d ",&n);
    scanf("%c%c%c",&c1,&c2,&c3);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1 && i!=n)
                printf("%c",c1);
            else if(j==i)
                printf("%c",c3);
            else if(i==n)
                printf("%c",c2);
            else
                printf(" ");
        }
        printf("\n");
    }
}