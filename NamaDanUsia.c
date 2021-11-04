#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void substring(char *dest, const char *source, int a, int n){
    int i=a;
    for (; i<a+n; i++)
        dest[i-a]=source[i];    
}
 
int main(){
    int n,i;
    float sum=0;
    char umur[2200][100];
    int usia[2000];
    char line[2000];
    char nama[1000][1000];
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        fgets(line,2000,stdin);
        substring(umur[i],line,0,2);
        usia[i]=atof(umur[i]);
        sum+=usia[i];
        substring(nama[i],line,2,2000);
    }
    for(i=0;i<n;i++)
        printf("%s",nama[i]);
    sum/=n;
    printf("%.2f\n",sum);
}