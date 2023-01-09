#include <stdio.h>
#include <stdlib.h> // standard library


int main() {
    FILE *f = fopen("person.txt", "r");
    int age;
    char name[50], addr[50];
    if (f == NULL) {
        printf("Unable to read file `person.txt`\n");
        exit(1);
    }
    while (fscanf(f, "%s %d %s", name, &age, addr) !=EOF)
    {
        printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Address: %s\n", addr);
    }
    fclose(f);
}
