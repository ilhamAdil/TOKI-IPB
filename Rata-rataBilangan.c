int main(){
    long n,i,bil;
    double rataan,sum=0.0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%ld",&bil);
        sum+=bil;}
    rataan=sum/(float)n;
    printf("%.3lf\n",rataan);
return 0;
}