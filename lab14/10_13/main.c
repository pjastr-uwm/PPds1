#include <stdio.h>
#include <stdlib.h>

int * shiftLeft(int n , int *tab){
    int * temp = malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++){
        *(temp+i) = *(tab+i+1);
    }
    *(temp +n-1) = *tab;
    return temp;
}

void printTable(int n, int *tab){
    for(int i=0;i<n;i++){
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int * tab=malloc(5*sizeof(int));
    *tab = 3;
    *(tab+1) = -2;
    *(tab+2) = 7;
    *(tab +3) = 8;
    *(tab +4) = 4;
    printf("Before\n");
    printTable(5, tab);
    int * res = shiftLeft(5, tab);
    printf("After old\n");
    printTable(5, tab);
    printf("After new\n");
    printTable(5, res);
    return 0;
}
