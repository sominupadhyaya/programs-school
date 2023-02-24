#include <stdio.h>


int greatest(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("%d is greatest\n", greatest(a, b));
    print_ownership();
    return 0;
}
