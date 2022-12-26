#include <stdio.h>


void even_odd(int a);

int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    even_odd(n);
    return 0;
}

void even_odd(int a) {
    if (a % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
}
