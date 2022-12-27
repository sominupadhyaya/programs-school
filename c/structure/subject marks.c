#include <stdio.h>


struct student {
    int roll;
    char name[50];
    int marks[6];
}s;

int main() {
    int sum = 0;
    printf("Enter student's name and roll no.\n");
    scanf("%s%d", s.name, &s.roll);
    printf("Enter 6 subject's marks\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &s.marks[i]);
        sum += s.marks[i];
    }
    printf("Total marks obtained: %d\n", sum);
    return 0;
}
