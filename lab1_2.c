#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    p = &a;
    printf("Valoarea lui a: %i", p);
    printf("\n Adresa lui a: %p", p);
    return 0;
};