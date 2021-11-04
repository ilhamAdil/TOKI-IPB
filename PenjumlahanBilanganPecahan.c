#include <cstdio>
int fpb(int a,int b){
    if(b==0)
        return a;
    else
        return fpb(b,a%b);  
}
 
int main(){
    int pem1,pem2,pen1,pen2,faktor; 
    int pembilang,penyebut;
    scanf("%d%d %d%d",&pem1,&pen1,&pem2,&pen2);
    penyebut=pen1*pen2;
    pembilang=(penyebut/pen1*pem1)+(penyebut/pen2*pem2);
    faktor=fpb(pembilang,penyebut);
    if(faktor!=1){
        pembilang/=faktor;
        penyebut/=faktor;
    }
    printf("%d %d\n",pembilang,penyebut);
}