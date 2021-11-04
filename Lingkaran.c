#include <stdio.h>
int main(){
    double D;
    double K,L;
    double pi=3.14;
    double R;
    scanf("%lf",&D);
    D/=2.0;
    K=2*pi*D;
    L=pi*D*D;
    printf("%.2lf %.2lf\n", K, L);
return 0;
}
  