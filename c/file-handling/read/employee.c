#include <stdio.h>
#include <stdlib.h>
#include "../../header/printOwnership.h"

int main() {
    FILE *f = fopen("emp.txt","r");
    int salary, age;
    char name[25], addr[25];
    if (f == NULL) {
        printf("Unable to read file `emp.txt`\n");
        exit(1);
    }
    while (fscanf(f, "%s %d %s %d", name, &age, addr, &salary) != EOF)
    {
        printf("Name: %s\n", name);
        printf("Address: %s\n", addr);
        printf("Age: %d\n", age);
        printf("Salary: %d\n", salary);
    }
    fclose(f);

    print_ownership();
    return 0;
}
