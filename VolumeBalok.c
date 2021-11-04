#include <stdio.h>
#define SIZE 10000

struct balok{
    double panjang;
    double lebar;
    double tinggi;
};
typedef struct balok R;

int main()
{
    long n, ask, count = 0;
    double average = 0, p, l, t, sum = 0;
    R list[SIZE];
    scanf("%ld", &n);
    for (int i=0; i<n; i++){
        scanf("%lf %lf %lf", &p, &l, &t);
        list[i].panjang = p;
        list[i].lebar = l;
        list[i].tinggi = t;
    }

    scanf("%ld", &ask);
    while (ask != -9)
    {
        sum += list[ask-1].panjang * list[ask-1].lebar * list[ask-1].tinggi;
        count++;
        scanf("%ld", &ask);
    }
    average = (double)sum / count;
    printf("%.4lf\n", average);
    return 0;
}