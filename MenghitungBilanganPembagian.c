#include <stdio.h>
int main(){
    long a,b,n=0,ans=0;
    double c;
    while(1){
        scanf("%ld",&a);
        if(a==-99) break;
        scanf("%ld %lf",&b,&c);
        if(b==0){
            n++;
            continue;}
        if((float)a/(float)b==c){
            ans++;}
        n++;          /*setiap langkah harus dihitung ingat! (untuk jumlah baris)*/
        }
    printf("%ld %ld\n",n,ans);
return 0;
}