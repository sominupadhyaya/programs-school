#include <stdio.h>

int multiply(int, int);
int main(){
    int a,b;
    printf("Enter any two numbers : \n");
    scanf("%d %d",&a,&b);
    printf("The product is : %d" , multiply(a,b));
}

int multiply(int a, int b){
    return a*b;
}