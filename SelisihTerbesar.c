#include <stdio.h>
#include <math.h>
int main(){
    int a,b,max=0,n=0,sel;
    while(1){
        scanf("%d",&a);  /*oalah jadi kalau ada 2 baris input tinggal scanf a, ama scanf b, ganti-gantian*/
        if(a==-99)break;
        scanf("%d",&b);
        n++;
        sel=fabs(a-b);
        if(sel>max) max=sel;
        }
    printf("%d %d\n",n,max);
return 0;
}
    