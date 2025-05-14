#include <stdio.h>
#include <stdlib.h>

struct Book{
    char * title;
    char * author;
    int publishedYear;
    int pages;
};

int main()
{
    struct Book tab[5]={
        {},
        {},
        {},
        {},
        {}
    };
    return 0;
}
