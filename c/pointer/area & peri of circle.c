#include <stdio.h>
#define PI 3.14


int main() {
    int r, *p;
    printf("Enter the radius\n");
    scanf("%d", &r);
    p = &r;
    printf("Area: %.2f\n", PI * (*p) * (*p));
    printf("Perimeter: %.2f\n", 2 * PI * *p);
    return 0;
}
