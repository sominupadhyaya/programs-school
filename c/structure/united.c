#include <stdio.h>
#include <stdlib.h>
#include "../header/printOwnership.h"


typedef union
{
    char* _country;
    int _country_rank;
}United_Nations;


int main(void){
    United_Nations a;
    a._country = "NEPAL";

    printf("\nSize of int: %d\n", sizeof(int));
    printf("\nSize of char*: %d\n", sizeof(char*));

    printf("\nSize of union: %d\n", sizeof(United_Nations));

    print_ownership();
}