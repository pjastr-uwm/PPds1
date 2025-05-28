#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list->next;
    list->next = ptr;
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
    // pusta
    struct element * list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    printListWithHead(list1);
    addFirst(list1, 7);
    printListWithHead(list1);
    // dwuelementowa
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = -2;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = 5;
    list2->next->next->next = NULL;
    printListWithHead(list2);
    addFirst(list2, 7);
    printListWithHead(list2);
    return 0;
}
