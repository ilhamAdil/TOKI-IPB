#include <stdio.h>
int main()
{
    long jam1,menit1,detik1;
    long jam2,menit2,detik2;
    scanf("%ld %ld %ld",&jam1,&menit1,&detik1);
    scanf("%ld %ld %ld",&jam2,&menit2,&detik2);
    long waktu1,waktu2;
    long durasi;
    waktu1=(jam1*3600)+(menit1*60)+detik1;
    waktu2=(jam2*3600)+(menit2*60)+detik2;
if (waktu2<waktu1){
    waktu2+=24*3600;
    durasi=waktu2-waktu1;
}
    durasi=waktu2-waktu1;
    printf("%ld",durasi);
}