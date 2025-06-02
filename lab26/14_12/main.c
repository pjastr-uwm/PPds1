#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addLast(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = NULL;
    struct element * ptr2 = list;
    while(ptr2->next != NULL){
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr;
}

void printListWithHead(struct element * list){
    if (list->next == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr = list->next;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = NULL;
    printListWithHead(list);
    addLast(list, 8);
    printListWithHead(list);
    addLast(list, -4);
    printListWithHead(list);
    addLast(list, 7);
    printListWithHead(list);
    return 0;
}
