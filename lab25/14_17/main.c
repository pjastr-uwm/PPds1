#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * even(struct element * list){
    struct element * ptr = list;
    struct element * evenPtr = NULL;
    while(ptr != NULL){
        if (ptr->x %2 == 0){
            evenPtr = ptr;
        }
        ptr = ptr->next;
    }
    return evenPtr;
};

void printListWithoutHead(struct element * list){
    if (list == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr = list;
    while(ptr != NULL){
        printf("%d %p\n", ptr->x, ptr);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 7;
    list->next = malloc(sizeof(struct element));
    list->next->x = -61;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -5;
    list->next->next->next = NULL;
    printf("%p\n", even(list));
    printListWithoutHead(list);
    return 0;
}
