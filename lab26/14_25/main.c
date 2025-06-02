#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeAll(struct element * list){
    struct element * current = list;
    struct element * next;
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    return NULL;
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
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = -3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x  = 7;
    list->next->next->next = NULL;
    printListWithoutHead(list);
    list = removeAll(list);
    printListWithoutHead(list);
    return 0;
}
