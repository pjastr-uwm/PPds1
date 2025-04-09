#include <stdio.h>
#include <stdlib.h>

int minIdxMax(int n, int tab[]){
    int ind = 0;
    for(int i=0;i<n;i++){
        if (tab[i] <= tab[ind]){
            ind =i;
        }
    }
    return ind;
}

int main()
{
    int tab[] = {3,-4,5,6,-4};
    printf("%d\n", minIdxMax(5, tab));
    return 0;
}
