#include <stdio.h>
int main() {
    char N;
    scanf("%ch",&N);
    if  (N=='A'||N=='a')
        printf("4\n");
    else if (N=='B'||N=='b')
        printf("3\n");
    else if (N=='C'||N=='c')
        printf("2\n");
    else if (N=='D'||N=='d')
        printf("1\n");
    else if (N=='E'||N=='e')
        printf("0\n");
    else printf("-1\n");
    
    return 0;
} 