#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int silnia =1;
    //int i=1;
    //while(i<=n){
    //    silnia *=i;
    //    i++;
    //}
    for(int i=1;i<=n;i++){
        silnia *=i;
    }
    printf("%d\n", silnia);
    return 0;
}
