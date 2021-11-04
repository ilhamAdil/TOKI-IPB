#include <stdio.h>
#define SIZE 100
 
int i,j;
void flipHorizontal(int arr[SIZE][SIZE],int r){
    int temp;
    for(i=0;i<r;i++){
        for(j=0;j<r/2;j++){
            temp=arr[i][j];
            arr[i][j]=arr[i][r-j-1];
            arr[i][r-j-1]=temp;
        }
    }
}
void flipVertikal(int arr[SIZE][SIZE],int r){
    int temp;
    for(i=0;i<r/2;i++){
        for(j=0;j<r;j++){
            temp=arr[i][j];
            arr[i][j]=arr[r-i-1][j];
            arr[r-i-1][j]=temp;
        }
    }
}
     
 
void transpose(int arr[SIZE][SIZE],int r,int baru[SIZE][SIZE]){
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            baru[j][i]=arr[i][j];
        }
    }
}
 
void cetakMatriks(int arr[SIZE][SIZE],int r){
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            printf("%d",arr[i][j]);
            if(j==r-1)
                printf("\n");
            else
                printf(" ");
        }
    }
}
     
 
int main(){
    int r;
    int data[SIZE][SIZE],hasil[SIZE][SIZE];
    scanf("%d",&r);
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            scanf("%d",&data[i][j]);
        }
    }
    int sudut;
    scanf("%d",&sudut);
    if(sudut==0){
        cetakMatriks(data,r);           
    }
    else if(sudut==90){
        transpose(data,r,hasil);
        flipVertikal(hasil,r);
        cetakMatriks(hasil,r);          
    }
    else if(sudut==180){
        flipVertikal(data,r);
        flipHorizontal(data,r);
        cetakMatriks(data,r);   
    }
    else if(sudut==270){
        transpose(data,r,hasil);
        flipHorizontal(hasil,r);
        cetakMatriks(hasil,r);          
    }
         
    return 0;
}
 