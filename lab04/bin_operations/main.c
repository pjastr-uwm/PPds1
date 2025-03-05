#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", 6&11);
    printf("%d\n", 6|11);
    printf("%d\n", 6^11);
    printf("%d\n", 17 << 2);
    printf("%d\n", 17 >> 2);
    printf("%d\n", 17 >> 5);
    printf("%d\n", ~6);
    return 0;
}
