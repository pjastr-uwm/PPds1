#include <stdio.h>
#include <stdlib.h>

void revRows(int n, int m, int tab[n][m]){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            temp = tab[i][j];
            tab[i][j] = tab[i][m-1-j];
            tab[i][m-1-j] = temp;
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
    printTable(2,3,tab1);
    revRows(2,3,tab1);
    printTable(2,3,tab1);
    return 0;
}
