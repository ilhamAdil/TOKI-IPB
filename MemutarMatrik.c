#include <cstdio>
int main(){
    int m,n;
    int data[51][51];
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&data[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==m-1)
                printf("%d\n",data[m-j-1][i]);
            else
                printf("%d ",data[m-j-1][i]);               
        }
    }
}