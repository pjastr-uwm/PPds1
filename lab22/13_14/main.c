#include <stdio.h>
#include <stdlib.h>

struct Bike{
    char model[40];
    int distance_travelled;
};

int length(char txt[]){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

struct Bike * initBike(char model[], int distance_travelled){
    int d = length(model);
    if (d<3 || distance_travelled <=0){
        return NULL;
    }
    struct Bike * temp = malloc(sizeof(struct Bike));
    temp->distance_travelled = distance_travelled;
    for(int i=0;i<d;i++){
        temp->model[i] = model[i];
    }
    temp->model[d] =0;
    return temp;
}

void showBike(struct Bike arg){
    printf("%s %d\n", arg.model, arg.distance_travelled);
}

void increaseDistance(struct Bike *b){
    b->distance_travelled += 500;
}

int main()
{
    struct Bike * b1 = initBike("romet", 3000);
    if (b1 !=NULL){
        showBike(*b1);
        increaseDistance(b1);
        showBike(*b1);
    }
    return 0;
}
