#include <stdio.h>
#include <stdlib.h>

int * initInts(){
    int * wsk = malloc(3*sizeof(int));
    if (wsk == NULL){
        return NULL;
    }
    *wsk = 5;
    *(wsk+1) = -12;
    *(wsk+2) = 33;
    return wsk+1;
}

int main()
{
    int * result = initInts();
    printf("%d\n", *(result-1));
    printf("%d\n", *result);
    printf("%d\n", *(result+1));
    free(result-1);
    return 0;
}
