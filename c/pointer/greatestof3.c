#include <stdio.h>

int main(){
    int a,b,c,*p,*q,*r;
    printf("Enter any 3 numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    p = &a;
    q = &b;
    r = &c;
    if(*p > *q && *p > *r){
        printf("%d is greatest\n",*p);
    } else if(*q > *r && *q > *p){
        printf("%d is greatest\n",*q);
    }else{
        printf("%d is greatest\n",*r);
    }
    return 0;
}