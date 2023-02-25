#include <stdio.h>
#include "../print_ownership.h"

int name_val(int value){
    value *= 100;
}

void name_ref(int *value){
    *value *= 100;
}


int main(void){
    int x = 7;
    printf("IN MAIN initially: x = %d\n", x);

    name_val(x);
    printf("IN MAIN after called by VALUE: x = %d\n", x);

    name_ref(&x);
    printf("IN MAIN after called by REF: x = %d\n", x);

    print_ownership();
}