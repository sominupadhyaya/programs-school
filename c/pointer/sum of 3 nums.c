#include <stdio.h>
#include "../header/printOwnership.h"


int main() {
    int a, b, c;
    int *p, *q, *r;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    p = &a, q = &b, r = &c;
    printf("Sum: %d\n", *p + *q + *r);

    print_ownership();
    return 0;
}
