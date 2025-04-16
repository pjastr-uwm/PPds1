#include <stdio.h>
#include <stdlib.h>

int length1(char txt[]){
    int i=0;
    while(txt[i] != '\0'){
        i++;
    }
    return i;
}

int length2(char * txt){
    int i=0;
    while(*(txt+i) != '\0'){
        i++;
    }
    return i;
}

int main()
{
    char t1[] = "Olsztyn";
    printf("%d\n", length1(t1));
    printf("%d\n", length2(t1));
    return 0;
}
