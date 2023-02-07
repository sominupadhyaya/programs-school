#include <stdio.h>

int fib(int n);
int main(){ 
    int i,n;
    printf("Enter the terms : \n");
    scanf("%d" , &n);
    for(i=1; i <= n; i++){
        printf("%d \t", fib(i));
    }
    return 0;
}

int fib(n){
    if(n == 1|| n==2){
        return 1;
    }else{
        return (fib(n-1) + fib(n-2));
    }
}