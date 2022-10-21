#include <stdio.h>
#include <string.h>

struct student
{
    char nume[20];
    char prenume[40];
    int varsta;
    float medie;
};

int main()
{

    struct student s1,s2;

    //s1.varsta = 21;
    s1.medie = 8.72;

    strcpy(s1.nume, "Popescu");
    strcpy(s1.prenume, "George");

    printf("Introdu varsta: ");
    scanf("%i", &s1.varsta);
    printf("\n Studentul %s %s are varsta %d si %.2f ", s1.nume, s1.prenume, s1.varsta, s1.medie); //%.2f unde 2 e numarul de zecimale

return 0;
};