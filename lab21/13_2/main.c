#include <stdio.h>
#include <stdlib.h>

struct Student{
    char * firstName;
    char * lastName;
    int id;
    float gpa;
};

int main()
{
    struct Student s1 = {"AA","BB",4, 3.5};
    struct Student s2 = {"XXY","EEE",3, 2.3};
    struct Student s3 = {"LL","WW",7, 4.5};
    struct Student s4 = {"PL","GGGG",8, 3.9};
    struct Student tab[4] = {s1,s2,s3,s4};
    for(int i=0;i<4;i++){
        printf("First and last name: %s %s, ID: %d, gpa: %f.\n",
                tab[i].firstName, tab[i].lastName, tab[i].id, tab[i].gpa);
    }
    return 0;
}
