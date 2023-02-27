#include <stdio.h>
#include "../../header/printOwnership.h"


int main() {
    FILE *f = fopen("emp.txt", "w");
    int salary;
    char name[50], addr[50];

    // writing data
    printf("Enter name, address and salary of 2 employees\n");
    for(int i=0; i<2; i++) {
        scanf("%s %s %d", name, addr, &salary);
        fprintf(f, "%s %s %d\n", name, addr, salary);
    }
    fclose(f);
    
    // reading data
    f = fopen("emp.txt", "r");
    while (fscanf(f, "%s %s %d", name, addr, &salary) != EOF)
    {
        printf("Name: %s\n", name);
        printf("Address: %s\n", addr);
        printf("Salary: %d\n", salary);
    }
    fclose(f);

    print_ownership();
    return 0;
}
