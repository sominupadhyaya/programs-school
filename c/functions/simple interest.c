#include <stdio.h>
#include "../header/printOwnership.h"


float simple_interest(int, int, int);

int main(){
    int p,t,r;
    printf("Enter the principal, time and rate respectively:\n");
    scanf("%d %d %d",&p,&t,&r);
    printf("The simple interest is : %.2f",simple_interest(p,t,r));

    print_ownership();
    return 0;
}

float simple_interest(int p, int t, int r){
    float si;
    si = (p*t*r)/100;
    return si;
}