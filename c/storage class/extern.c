#include <stdio.h>
#include "../header/printOwnership.h"


// variable that is to be made extern, default value is 0
int x;


void change_value() {
    // telling the compiler that `x` has already been defined somewhere else
    extern int x;
    // value of x is modified
    x = 50;
}

int main() {
    printf("Declared value of x: %d\n", x);
    change_value();
    printf("New value of x: %d\n", x);
    
    print_ownership();
    return 0;
}
