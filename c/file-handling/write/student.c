#include <stdio.h>


int main() {
    FILE *f = fopen("student.txt", "w");
    char name[50], addr[50];
    int roll;
    printf("Enter student name, roll no and address of 100 students\n");
    for (int i=0; i<100; i++) {
        scanf("%s%d%s", name, &roll, addr);
        fprintf(f, "%s %d %s\n", name, roll, addr);
    }
    fclose(f);
    return 0;
}
