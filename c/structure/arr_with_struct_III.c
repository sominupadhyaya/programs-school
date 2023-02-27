/* Sort Structures by the _name member variable */

#include <stdio.h>
#include <string.h>
#include "../header/printOwnership.h"


struct Students{
    char _name[25];
    int _grade;
}s[5];

void swap_Students(struct Students *dest, struct Students *src){
    struct Students temp;
    temp._grade = src->_grade;
    strcpy(temp._name, src->_name);

    src->_grade =  dest->_grade;
    strcpy(src->_name, dest->_name);

    dest->_grade = temp._grade;
    strcpy(dest->_name, temp._name);
}

int main(void){
    for(int i = 0; i != 5; ++i){
        printf("Enter name and grade of %d student:\n", i+1);
        scanf("%s%d", s[i]._name, &(s[i]._grade));
    }
    

    for(int i = 0; i != 5; ++i){
        for(int j = i+1; j != 5; ++j){
            if(strcmp(s[i]._name, s[j]._name) > 0){
                swap_Students(&s[i], &s[j]);
            }
        }
    }

    printf("\nSorted Students:\n");
    for(int i = 0; i != 5; ++i){
        printf("\n\nName: %s\nGrade: %d\n", s[i]._name, s[i]._grade);
    }

    print_ownership();
}