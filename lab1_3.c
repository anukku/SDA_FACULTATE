#include <stdio.h>
#include <string.h>

typedef struct
{
    char nume[20];
    char prenume[40];
    int varsta;
    float medie;
} Student, *pStudent;


int main()
{

    Student s1, s2;
    pStudent ps = &s2;

    ps -> varsta = 23;
    ps -> medie = 9.40;
    strcpy(ps -> nume, "Ionescu");

    printf("Studentul %s are %d ani si media %.2f", ps -> nume, ps -> varsta, ps -> medie);
};