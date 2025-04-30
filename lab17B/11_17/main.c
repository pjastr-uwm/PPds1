#include <stdio.h>
#include <stdlib.h>

int length(char*txt){
    int i=0;
    while(txt[i]!=0){
        i++;
    }
    return i;
}

void rmOdd(char * txt){
    int d = length(txt);
    char temp[d];
    int i,j=0;
    for(i=0;txt[i] !=0;i++){
        if(i%2==0){
            temp[j] = txt[i];
            j++;
        }
    }
    temp[j] =0;
    int k;
    for(k=0;temp[k]!=0;k++){
        txt[k] = temp[k];
    }
    txt[k] =0;
}

void rmOdd2(char * txt){
    int i,j=0;
    for(i=0;txt[i] !=0;i++){
        if(i%2==0){
            txt[j] = txt[i];
            j++;
        }
    }
    txt[j] = 0;
}

int main()
{
    char t1[] = "DOMEK";
    printf("%s\n", t1);
    rmOdd(t1);
    printf("%s\n", t1);
    char t2[] = "PROGRAMOWANIE";
    printf("%s\n", t2);
    rmOdd2(t2);
    printf("%s\n", t2);
    return 0;
}
