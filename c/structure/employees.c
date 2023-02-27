#include <stdio.h>
#include "../header/printOwnership.h"


struct employee {
    int id;
    char name[150];
    char addr[150];
    int salary;
};

int main() {
    struct employee e[5];
    printf("Enter employee name, id, address and salary of 5 employees\n");
    for (int i=0; i < 5; i++) {
        scanf("%s%d%s%d", e[i].name, &e[i].id, e[i].addr, &e[i].salary);
    }
    printf("Employee Info\n");
    for (int j=0; j < 5; j++) {
        printf("Name: %s\nId: %d\nAddress: %s\nSalary: %d\n", 
                e[j].name, e[j].id, e[j].addr, e[j].salary);
    }

    print_ownership();
    return 0;
}
