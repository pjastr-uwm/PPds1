#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int **tab){
    int minimum = tab[0][0];
    int columnInd =0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if (minimum > tab[i][j]){
                minimum = tab[i][j];
                columnInd = j;
            }
        }
    }
    return columnInd;
}

int main()
{
    int ** tab = malloc(3*sizeof(int*));
    tab[0] = malloc(4*sizeof(int));
    tab[1] = malloc(4*sizeof(int));
    tab[2] = malloc(4*sizeof(int));
    tab[0][0] =  1; tab[0][1] = -2; tab[0][2] =  3; tab[0][3] =  4;
    tab[1][0] = -7; tab[1][1] =  6; tab[1][2] =  5; tab[1][3] = -8;
    tab[2][0] = 13; tab[2][1] = 12; tab[2][2] = -8; tab[2][3] =  9;
    printf("%d\n", minColIdx(3,4, tab));
    return 0;
}
