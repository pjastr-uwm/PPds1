#include <stdio.h>
#include <stdlib.h>

int length(char*txt){
    int i=0;
    while(txt[i]!=0){
        i++;
    }
    return i;
}

char *toUpperNew(char*txt){
    int d = length(txt);
    char * temp = malloc((d+1) * sizeof(char));
    int i;
    for(i=0;txt[i] !=0;i++){
        temp[i] = txt[i];
        if ('a' <= temp[i] && temp[i] <='z'){
            temp[i] -=32;
        }
    }
    temp[i] = 0;
    return temp;
}

int main()
{
    char * t1 ="ABCxyz34.';";
    printf("%s\n", t1);
    char * w1 = toUpperNew(t1);
    printf("%s\n", w1);
    char t2[] ="klm88ksWE";
    printf("%s\n", t2);
    char * w2 = toUpperNew(t2);
    printf("%s\n", w2);
    return 0;
}
