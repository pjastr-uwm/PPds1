#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char*brand;
    int cores;
};

int maxCores(struct Computer tab[],int n){
    int temp = tab[0].cores;
    for(int i=0;i<n;i++){
        if (tab[i].cores >temp){
            temp = tab[i].cores;
        }
    }
    return temp;
}

int main()
{
    struct Computer tab[] ={
        {"AAA", 4},
        {"AfdfA",8},
        {"gdf", 5}
    };
    printf("%d\n", maxCores(tab,3));
    return 0;
}
