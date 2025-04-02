#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for(int i=start;i<=end;i++){
        printf("%d\n", func(i));
    }
}

int cube(int x){
    return x*x*x;
}

int main()
{
    applyFunction(cube, 3,7);
    applyFunction(cube, 3,-7);
    return 0;
}
