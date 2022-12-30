#include <stdio.h>


int main() {
    int a, *p;
    printf("Enter a number\n");
    scanf("%d", &a);
    p = &a;
    if (*p % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}
