#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Persoana
{
    char Nume[20];
    unsigned int AnNastere;
    struct Persoana *link;
} NODE, *pNode, **ppNode;

void print_data(struct Persoana *prim, unsigned int * pLen)
{
    struct Persoana *tmp = prim;
    *pLen = 0;
    while (tmp != NULL)
    {
        printf("\n%d", tmp->AnNastere);
        tmp = tmp->link;
        (*pLen)++;
        
    }
printf("\nLungime lista: %u", *pLen);
};

int main()
{
    unsigned int len = 0;
    pNode prim, adr2, adr3;
    prim = (pNode)malloc(sizeof(NODE));
    printf("Adresa este: %p", prim);
    adr2 = (pNode)malloc(sizeof(NODE));
    adr3 = (pNode)malloc(sizeof(NODE));
    prim -> link = adr2;
    adr2 -> link = adr3;
    adr3 -> link = NULL;
    prim -> AnNastere = 2003;
    strcpy(prim -> Nume, "Matei");
    adr2 -> AnNastere = 2000;
    strcpy(adr2 -> Nume, "Andrei");
    adr3 -> AnNastere = 1998;
    strcpy(adr3 -> Nume, "George");
    
    print_data(prim, &len);
    
    return 0;
}