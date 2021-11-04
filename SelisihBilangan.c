#include <stdio.h>
#include <math.h>
 
int main(){
    long a,b,c,d;
    long e,f,g;
    scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
    e=fabs(a-b);
    f=fabs(b-c);
    g=fabs(c-d);
    if(e>=f && e>=g)
        printf("%ld\n",e);
    else if(f>=e && f>=g)
        printf("%ld\n",f);
    else
        printf("%ld\n",g);
     
return 0;
}