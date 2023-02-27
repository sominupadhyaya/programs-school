#include <stdio.h>
#include "../header/printOwnership.h"


int main() {
    int x, y, *p, *q;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);
    p = &x;
    q = &y;
    if (*p > *q) {
        printf("%d is greatest\n", *p);
    } else {
        printf("%d is greatest\n", *q);
    }
    
    print_ownership();
    return 0;
}