#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printOdd(struct element * list){
    struct element * ptr = list->next;
    while(ptr != NULL){
        if (ptr->x %2 != 0){
            printf("%d\n", ptr->x);
        }
        ptr = ptr->next;
    }
}

int main()
{
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 8;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = 5;
    list2->next->next->next = malloc(sizeof(struct element));
    list2->next->next->next->x = -7;
    list2->next->next->next->next = NULL;
    printOdd(list2);
    return 0;
}
