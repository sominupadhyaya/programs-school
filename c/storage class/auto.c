#include <stdio.h>
#include "../header/printOwnership.h"


int main() {
    // `auto int x` is same as writing `int x` and same for other data types
    auto int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    printf("Square is: %d\n", x*x);

    print_ownership();
    return 0;
}
