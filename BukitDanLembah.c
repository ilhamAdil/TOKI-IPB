#include <stdio.h>
#include <math.h>
int i;
int n=0,m=0;
int deretan[1000000];
int stasioner[1000000];
 
int main(){
    int x,tinggi,cek,max=0,selisih;
    scanf("%d",&x);
    while(x--){
        scanf("%d",&tinggi);
        if(n>0 && tinggi==deretan[n-1]){
            continue;
        }
        deretan[n++]=tinggi;
    }
     
    for(i=0;i<n;i++){
        cek=0;
        if(i==0||i==n-1)
            cek=1;
        if(deretan[i-1]<deretan[i] && deretan[i]>deretan[i+1])
            cek=1;
        if(deretan[i-1]>deretan[i] && deretan[i]<deretan[i+1])
            cek=1;
         
        if(cek)
            stasioner[m++]=deretan[i];      
    }
    for(i=1;i<m;i++){
        selisih=fabs(stasioner[i]-stasioner[i-1]);
        if(selisih>max)
            max=selisih;
    }
    printf("%d\n",max);
return 0;
}