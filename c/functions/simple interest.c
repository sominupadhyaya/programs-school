#include <stdio.h>

int simple_interest(int, int, int);


int main(){
    int p,t,r;
    printf("Enter the principal, time and rate respectively:\n");
    scanf("%d %d %d",&p,&t,&r);
    printf("The simple interest is : %d",simple_interest(p,t,r));
    return 0;
}

int simple_interest(p, t , r){
    int si;
    si = (p*t*r)/100;
    return si;
}