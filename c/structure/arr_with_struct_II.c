#include <stdio.h>
#include "../print_ownership.h"

struct Teacher
{
    int _id;
    char _name[25];
    char _sub[10];
}t[10];



int main(void){
    printf("Enter id, Name and Subject of 3 teachers:\n");

    for(int i = 0; i < 3; ++i){
        scanf("%d %s %s", &(t[i]._id), t[i]._name, t[i]._sub);
    }

    for(int i = 0; i < 3; ++i){
        printf("\nId: %d\nName: %s\nSubject: %s\n", t[i]._id, t[i]._name, t[i]._sub);
    }

    print_ownership();
}