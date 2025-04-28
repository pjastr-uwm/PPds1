#include <stdio.h>
#include <stdlib.h>

int isVowel(char c){
    char vowels[] = "aeiouyAEIOUY";
    for(int i=0;vowels[i] !=0;i++){
        if (vowels[i] == c){
            return 1;
        }
    }
    return 0;
}

int countVow(char txt[]){
    int counter=0;
    for(int i=0; txt[i] !=0;i++){
        if (isVowel(txt[i])){
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", countVow("ABCXYZxyz567"));
    return 0;
}
