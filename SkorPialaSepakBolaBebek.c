#include <stdio.h>
int main(){
    long n,m,i,j,sum=0,st=0,a=1,x=0;
    long sum1=0,sum2=0,sum3=0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        sum=0;
        if(x>(n-1))
            x=x;
        else x=0;
        for(j=1;j<=3;j++){
        scanf("%ld",&m);
        x+=m;
            if(j==1){
            sum1+=m;
            m*=3;
            sum+=m;}
            else if(j==2){
            sum2+=m;
            m*=0;
            sum+=m;}
            else if(j==3){
            sum3+=m;
            m*=1;
            sum+=m;}
        }
        if(st>sum){
            sum=st;}
        else if(sum>st){
            a=i;}
        st=sum;
    }
    if(x>(n-1))
        printf("-1\n");
    else if(sum1!=sum2)
        printf("-1\n");
    else if(sum3%2!=0)
        printf("-1\n");
    else
        printf("%ld %ld\n",a,sum);
return 0;
}