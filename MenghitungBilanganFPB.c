#include <stdio.h>
long fpb(long a,long b){
    long c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;}
    return a;
}
int main(){
    long a,b,c,n=0,ans=0;
    while(1){
        scanf("%ld",&a);            /*cek terlebih dulu a -99 atau tidak*/
        if(a==-99)  break;
        scanf("%ld %ld",&b,&c);
        if(a<0||b<0||c<0){
            n++;
            continue;}              /*sebenarnya if ini untuk menskip fase disaat kondisi tsb, tetapi karena baris dihitung juga jd sebelum skip harus n++ */  
        if(c==fpb(a,b)){
            ans++;}
        n++;
        }
    printf("%ld %ld\n",n,ans);
return 0;
}