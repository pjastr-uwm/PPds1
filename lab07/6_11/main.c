#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<0){
        n = -n;
    }
    int cyfra;
    int sumaCyfr =0;
    if (n==0){
        printf("cyfra 0\n");
    }
    while(n>0){
        cyfra = n %10;
        printf("cyfra %d\n", cyfra);
        sumaCyfr += cyfra;
        n /= 10;
    }
    printf("Suma cyfr %d\n", sumaCyfr);
    return 0;
}
