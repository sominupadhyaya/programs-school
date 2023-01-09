#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *f = fopen("emp.txt","r");
    int salary, age;
    char name[50], addr[50];
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
    return 0;
}
