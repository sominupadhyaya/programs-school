#include <stdio.h>
#include "../header/printOwnership.h"

int sum(int, int, int);

int main() {
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    int r = sum(a, b, c);
    printf("Sum is: %d\n", r);

    print_ownership();
    return 0;
}


int sum(int x, int y, int z) {
    return x+y+z;
}
