#include <stdio.h>
#include <stdlib.h>

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

void print_days(enum Day d, int n){
    d = d%7;
    if (n==0)
        return;

    if (d == MONDAY){
        printf("MONDAY\n");
    }
    else if (d== TUESDAY){
        printf("TUESDAY\n");
    }
    else if (d== WEDNESDAY){
        printf("WEDNESDAY\n");
    }
    else if (d== THURSDAY){
        printf("THURSDAY\n");
    }
    else if (d== FRIDAY){
        printf("FRIDAY\n");
    }
    else if (d== SATURDAY){
        printf("SATURDAY\n");
    }
    else if (d== SUNDAY){
        printf("SUNDAY\n");
    }

    print_days(++d,--n);
}

int main()
{
    print_days(FRIDAY, 4);
    return 0;
}
