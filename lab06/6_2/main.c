#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int suma=0;
    for(int i=1;i<=n;i++){
        suma +=i;
    }
    printf("Suma %d\n", suma);
    return 0;
}
