#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list;
    return ptr;
};

void printListWithoutHead(struct element * list){
    if (list == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr = list;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    //pusta lista
    struct element * list1 = NULL;
    struct element * list2 = addFirst(list1, 7);
    printListWithoutHead(list1);
    printListWithoutHead(list2);
    //dwuelementowa lista
    struct element * list3 = malloc(sizeof(struct element));
    list3->x =4;
    list3->next = malloc(sizeof(struct element));
    list3->next->x = -3;
    list3->next->next = NULL;
    struct element * list4 = addFirst(list3, 7);
    printListWithoutHead(list3);
    printListWithoutHead(list4);
    return 0;
}
