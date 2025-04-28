#include <stdio.h>
#include <stdlib.h>

void rmDigits(char txt[]){
    int i=0,j=0;
    for(i=0; txt[i] !=0;i++){
        if ('0'> txt[i] || txt[i] > '9'){
            txt[j] = txt[i];
            j++;
        }
    }
    txt[j] =0;
}

int main()
{
    char t1[] = "AN4Wt.5a";
    printf("%s\n", t1);
    rmDigits(t1);
    printf("%s\n", t1);
    return 0;
}
