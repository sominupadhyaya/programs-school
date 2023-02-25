#include <stdio.h>
#include "../print_ownership.h"

void call_by_value(int input){
    input *= 100;
    printf("!!!~~~---FUNCTION CALLED BY VALUE---~~~!!!\n");
}

void call_by_ref(int *input){
    *input *= 100;
    printf("!!!~~~---FUNCTION CALLED BY REFERENCE---~~~!!!\n");
}

void print_original_num(const int original_num){
    printf("\nThe original number was: %d\n", original_num);
}

int main(void){
    const int original_number = 69;
    int working_num = original_number;

    print_original_num(original_number);

    call_by_value(working_num);
    printf("The number after called by VALUE is: %d\n", working_num);

    print_original_num(original_number);

    call_by_ref(&working_num);
    printf("The number after called by REFERENCE is: %d\n", working_num);
    
    print_ownership();
}