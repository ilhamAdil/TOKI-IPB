#include <stdio.h>
long long n,ans,a,b,i;
 
int main(){
 
    scanf("%lld",&n);
    a=1; b=1;
    if(n==1 || n==2){
        printf("1\n");
    }
    else{
    for (i = 0; i < n-2; i++)
    {
        ans=a+b;
        b=a; a=ans;
    }
    printf("%lld\n", ans);
}
return 0;
}