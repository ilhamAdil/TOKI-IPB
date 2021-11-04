#include <cstdio>
int data[20000]={0};
int hasil[20000];
 
int main(){
    int x=0;
    int n,p,banyak,per;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&banyak);
        data[i]=banyak+data[i-1];
    }
    scanf("%d",&p);
    for(int i=1;i<=p;i++){
        scanf("%d",&per);
        for(int j=1;j<=n;j++){
            if(per<=data[j]){
                hasil[x++]=j;
                break;
            }
        }
    }
     
    for(int i=0;i<x;i++)
        printf("%d\n",hasil[i]);    
}