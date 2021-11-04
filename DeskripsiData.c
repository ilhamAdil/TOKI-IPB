#include <stdio.h>
int main(){
    long n,i;
    double a,min,max,sum=0;
    scanf("%ld",&n);
    scanf("%lf",&min);
    sum=min;
    max=min;
    for(i=1;i<n;i++){
        scanf("%lf",&a);
        sum=sum+a;
        if(a<min){
        min=a;
        }
        else if(a>max)
        max=a;
    }
    printf("%.2lf %.2lf %.2lf\n",min,max,sum/(float)n);
    return 0;       
}
 