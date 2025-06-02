#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addLast(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = NULL;
    if (list == NULL){
        return ptr;
    }
    struct element * ptr2 = list;
    while(ptr2->next != NULL){
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr;
    return list;
}

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
    struct element * list = NULL;
    printListWithoutHead(list);
    list = addLast(list, 7);
    printListWithoutHead(list);
    list = addLast(list, -4);
    printListWithoutHead(list);
    list = addLast(list, 12);
    printListWithoutHead(list);
    return 0;
}
