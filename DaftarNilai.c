#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i,n;
    float max=0;
    char *temp;
    char namaMax[100];
    char nimMax[100];
    char jenisMax[100];
    char line[1001];
    char jenis[1001][2];
    char nim[1001][20];
    char nama[1001][100];
    float nilai[1001]={0};
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        fgets(line,2000,stdin);
        temp=strtok(line,",");
        strcpy(nim[i],temp);
        temp=strtok(NULL,",");
        strcpy(nama[i],temp);
        temp=strtok(NULL,",");
        strcpy(jenis[i],temp);
        temp=strtok(NULL,",");
        nilai[i]+=atof(temp);
        temp=strtok(NULL,",");
        nilai[i]+=atof(temp);
        nilai[i]/=2;
    }
    for(i=0;i<n;i++){
        if(nilai[i]>max){
            max=nilai[i];
            strcpy(nimMax,nim[i]);
            strcpy(namaMax,nama[i]);
            strcpy(jenisMax,jenis[i]);
        }
    }
    printf("%s\n%s\n%s\n%.2f\n",nimMax,namaMax,jenisMax,max);
}
     