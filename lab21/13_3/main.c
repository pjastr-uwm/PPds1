#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char * color;
};

int main()
{
    struct Rectangle tab[] = {
        {3.4, 7.3, "red"},
        {2.3, 6.3, "green"},
        {2.9, 1.2, "pink"},
        {6.4, 3.1, "orabge"}
    };
    return 0;
}
