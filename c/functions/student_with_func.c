#include <stdio.h>

typedef struct 
{
    int _roll;
    char _name[25];
    int _grade;
}Student;

void print_student_with_message(const Student* s, const char* message){
    printf("%s\nRoll: %d\nName: %s\nGrade: %d\n", message, s->_roll, s->_name, s->_grade);
}

void input_student(Student* s){
    printf("Enter the name of student:\n");
    scanf("%s", s->_name);
    printf("Enter the Roll of student:\n");
    scanf("%d", &(s->_roll));
    printf("Enter the Grade of student:\n");
    scanf("%d", &(s->_grade));
}

int main(void){
    Student s1 = {1, "Hello", 5};
    print_student_with_message(&s1, "DEFAULT INITIALIZED:");

    Student s2;
    input_student(&s2);

    print_student_with_message(&s2, "USER INITIALIZED:");

    getchar();
}