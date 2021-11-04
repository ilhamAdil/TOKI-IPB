#include <cstdio>
int main(){
    int m,n;
    float data[40000];
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m*n;i++){
        scanf("%f",&data[i]);
    }
    int N,bil;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&bil);
        printf("%.2f\n",data[bil]);
    }
}