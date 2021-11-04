#include <stdio.h>
int main(){
    long a,b;
    scanf("%ld",&a);
    b=a/200;
    if(b!=0){
        printf("200 %ld\n",b);
        a=a%200;}
    b=a/100;
    if(b!=0){
        printf("100 %ld\n",b);
        a=a%100;}
    b=a/50;
    if(b!=0){
        printf("50 %ld\n",b);
        a=a%50;}
    b=a/20;
    if(b!=0){
        printf("20 %ld\n",b);
        a=a%20;}
    b=a/10;
    if(b!=0){
        printf("10 %ld\n",b);
        a=a%10;}
    b=a/5;
    if(b!=0){
        printf("5 %ld\n",b);
        a=a%5;}
    b=a/2;
    if(b!=0){
        printf("2 %ld\n",b);
        a=a%2;}
    b=a/1;
    if(b!=0){
    printf("1 %ld\n",b);}
 
return 0;
}