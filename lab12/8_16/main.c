#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1=*p2;
    *p2= temp;
}

int main()
{
    int x=7, y=4;
    printf("%d %d\n", x,y);
    swap(&x,&y);
    printf("%d %d\n", x,y);
    return 0;
}
