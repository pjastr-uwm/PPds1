#include <stdio.h>
#include <stdlib.h>

void swapItems(int n, int m, int ** tab1, int **tab2){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void printTable(int n, int m, int** tab){
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
    int **tab1 = malloc(2*sizeof(int*));
    tab1[0]= malloc(3*sizeof(int));
    tab1[1]= malloc(3*sizeof(int));
    tab1[0][0] = 1; tab1[0][1] = -2; tab1[0][2] =  3;
    tab1[1][0] = 8; tab1[1][1] =  9; tab1[1][2] = -4;
    printTable(2,3,tab1);
    int **tab2 = malloc(2*sizeof(int*));
    tab2[0]= malloc(3*sizeof(int));
    tab2[1]= malloc(3*sizeof(int));
    tab2[0][0] = 7; tab2[0][1] = -2; tab2[0][2] =  5;
    tab2[1][0] = 8; tab2[1][1] = 13; tab2[1][2] = -4;
    printTable(2,3,tab2);
    swapItems(2,3,tab1, tab2);
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    return 0;
}
