#include <stdio.h>
#include <math.h>
int main(){
    long x1,y1,x2,y2,x3,y3;
    long r1,r2;
    scanf("%ld %ld",&x1,&y1);
    scanf("%ld %ld",&x2,&y2);
    scanf("%ld %ld",&x3,&y3);
    r1=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    r2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    if(r1<r2)
        printf("1\n");
    else if(r1==r2)
        printf("12\n");
    else
        printf("2\n");
return 0;
}   