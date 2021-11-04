#include <stdio.h>
int main(){
    long min,a;
    scanf("%ld",&min);
    if(min==-99)
        printf("empty\n");
    else{   
    while(a!=-99){
        scanf("%ld",&a);
        if(a<min && a!=-99){
            min=a;}
        }
        printf("%ld\n",min);
    }
return 0;
}