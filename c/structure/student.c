#include <stdio.h>


struct student
{
    int roll;
    char name[50];
    char addr[50];
}s;

int main() {
    printf("Enter student name, roll no. and address\n");
    scanf("%s%d%s", s.name, &s.roll, s.addr);
    printf("Student Info\n");
    printf("Name: %s\nRoll No: %d\nAddress: %s\n", s.name, s.roll, s.addr);
    return 0;
}
