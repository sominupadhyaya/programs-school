#include <stdio.h>
#include "../header/printOwnership.h"


int fibo(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main() {
    int a;
    printf("Enter the fibonacci limit:\n");
    scanf("%d", &a);
    for(int i=0; i<a; i++) {
        printf("%d\t", fibo(i));
    }
    print_ownership();
}
