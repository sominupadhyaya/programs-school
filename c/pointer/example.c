#include <stdio.h>
#include "../header/printOwnership.h"


int main() {
    int a = 5;
    int *ptr;
    ptr = &a;
    // %x for hexadecimal, %u for numeric value
    printf("Memory address of `a`: %u\n", &a);
    printf("Value of a: %d\n", a);
    printf("Value of `p`: %u\n", ptr);
    printf("Value pointed by `p`: %d\n", *ptr);

    print_ownership();
    return 0;
}
