#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

void duplicateLast(struct node * list){
    if (list==NULL){
            return;
    }
    struct node * ptr = list;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = malloc(sizeof(struct node));
    ptr->next->i = ptr->i;
    ptr->next->next = NULL;
}

void print(struct node * list){
    struct node * ptr = list;
    while(ptr != NULL){
        printf("%p %d\n", ptr, ptr->i);
        ptr = ptr->next;
    }
    printf("--\n");
}

int main()
{
    struct node * list = malloc(sizeof(struct node));
    list->i = 6;
    list->next = NULL;
    print(list);
    duplicateLast(list);
    print(list);
    return 0;
}
