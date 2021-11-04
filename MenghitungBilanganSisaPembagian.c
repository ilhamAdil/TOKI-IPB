#include <stdio.h>
int main(){
    long i,n,a,b,c,ans=0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a<=0||b<=0) continue;    /*untuk mencegah error pada operasi 0 mod 0 = error, maka terlebih dulu cek a dan b itu nol atau tidak, 
                                    jika 0, maka continue(artinya lewat langkah ini, lalu balik lagi ke atas*/
        if(a%b==c)
            ans++;
    }
    printf("%ld\n",ans);
return 0;
}