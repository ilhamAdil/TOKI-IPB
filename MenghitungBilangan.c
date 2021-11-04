#include <stdio.h>
int main(){
    long a,bil,x=0,y=0;
    scanf("%ld",&a);
    if(a==-99)
        printf("%ld %ld\n",x,y);
    else{
    while(bil!=-99){
        scanf("%ld",&bil);
        if(bil<=a)
            x++;
        else if(bil>a)
            y++;}
        printf("%ld %ld\n",x,y);
        }   
return 0;
}