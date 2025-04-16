#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char txt[]){
    for(int i=0; txt[i]!=0;i++){
        if (97<= txt[i] && txt[i] <= 122){
            txt[i] -=32;
        }
    }
}

void toUpperNew2(char txt[]){
    for(int i=0; txt[i]!=0;i++){
        if ('a'<= txt[i] && txt[i] <= 'z'){
            txt[i] -= ('a'-'A');
        }
    }
}

int main()
{
    char t1[] = "Olsztyn123";
    printf("%s\n",t1);
    toUpperNew2(t1);
    printf("%s\n",t1);
    return 0;
}
