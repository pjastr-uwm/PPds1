#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int find(struct element * list, int a){
    struct element * ptr = list->next;
    while(ptr !=NULL){
        if (ptr->x == a){
            return 1;
        }
        ptr = ptr->next;
    }
    return 0;
}

int foo(int tab[], int n, int a){
    for(int i=0;i<n;i++){
        if(tab[i] == a){
            return 1;
        }
    }
    return 0;
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -4;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 5;
    list->next->next->next->next = NULL;
    printf("%d\n", find(list,12));
    return 0;
}
