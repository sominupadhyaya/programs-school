#include <stdio.h>
#include "../header/printOwnership.h"

#define PI 3.14


float area(int r) {
    return PI * r * r;
}

float peri(int r) {
    return 2 * PI * r;
}

int main() {
    int n;
    printf("Enter the radius of circle\n");
    scanf("%d", &n);
    printf("Area is: %.2f\n", area(n));
    printf("Perimeter is: %.2f\n", peri(n));

    print_ownership();
    return 0;
}
