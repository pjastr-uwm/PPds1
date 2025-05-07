#include <stdio.h>
#include <stdlib.h>

void swapElems(int n, int m, int tab1[n][m], int tab2[n][m]){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d][%d] = %d, ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

int main()
{
    int tab1[2][3] = {{1,-2,3},{8,9,-4}};
    int tab2[2][3] = {{7,-2,5},{8,13,-4}};
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    swapElems(2,3,tab1,tab2);
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    return 0;
}
