#include <stdio.h>


int main() {
    int p, t, r, *a, *b, *c;
    printf("Enter principle, time and rate\n");
    scanf("%d%d%d", &p, &t, &r);
    a = &p, b = &t, c = &r;
    float si = ((*a) * (*b) * (*c)) / 100;
    printf("Simple intrest: %.2f", si);
    return 0;    
}
