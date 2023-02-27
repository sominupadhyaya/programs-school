#include <stdio.h>
#include "../header/printOwnership.h"

struct student {
    int roll;
    char name[50];
    char addr[50];
}s;

int main() {
    printf("The size of structure 'student' is: %d bytes\n", sizeof(s));

    print_ownership();
    return 0;
}
