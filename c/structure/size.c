#include <stdio.h>

struct student {
    int roll;
    char name[50];
    char addr[50];
}s;

int main() {
    printf("The size of structure 'student' is: %d bytes\n", sizeof(s));
    return 0;
}
