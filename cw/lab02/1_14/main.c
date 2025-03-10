#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a =1.100001;
    double b =0.20222;
    double c = 0.1;
    printf("%d\n", ((a+b)+c)== (a+(b+c)));
    printf("%.20f\n", (a+b)+c);
    printf("%.20f\n", a+(b+c));
    return 0;
}
