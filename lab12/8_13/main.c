#include <stdio.h>
#include <stdlib.h>

int* minPtr(int*p1, int *p2, int*p3){
    if (*p1 >= *p2){
        if (*p2 >= *p3){
            return p3;
        }
        return p2;
    }
    if (*p1 >= *p3){
        return p3;
    }
    return p1;
}

int main()
{
    int x=4, y=-7, z=-9;
    printf("%d %p\n", x, &x);
    printf("%d %p\n", y, &y);
    printf("%d %p\n", z, &z);
    int * result = minPtr(&x,&y,&z);
    printf("%d %p", *result, result);
    return 0;
}
