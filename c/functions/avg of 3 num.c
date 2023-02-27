#include <stdio.h>
#include "../header/printOwnership.h"

int avg(int a, int b, int c) {
    int l = (a+b+c) / 3;
    return l;
}

int main() {
    int x, y, z;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &x, &y, &z);
    printf("Average is: %d\n", avg(x, y, z));
    
    print_ownership();
    return 0;
}
