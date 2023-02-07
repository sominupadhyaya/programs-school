#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("Enter the number for factorial: \n");
    scanf("%d", &n);
    printf("The factorial is: %d",factorial(n));
    return 0;
}

int factorial(n){
    if(n >= 1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}