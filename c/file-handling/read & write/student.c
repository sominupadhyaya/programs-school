#include <stdio.h>


int main() {
    FILE *f = NULL;
    int roll;
    char name[50], addr[50];

    // writing data to file
    f = fopen("student.txt", "w");
    printf("Enter name, address and roll no. of 100 students\n");
    for (int i=0; i<100; i++) {
        scanf("%s %s %d", name, addr, &roll);
        fprintf(f, "%s %d %s\n", name, roll, addr);
    }
    fclose(f);

    // reading data from file
    f = fopen("student.txt", "r");
    while (fscanf(f, "%s %d %s", name, &roll, addr) != EOF)
    {
        printf("Name: %s\n", name);
        printf("Roll No.: %d\n", roll);
        printf("Address: %s\n", addr);
    }
    fclose(f);
    return 0;  
}
