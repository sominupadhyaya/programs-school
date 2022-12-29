// WAP to store emp_id, emp name and emp post of employee on emp.txt file


#include <stdio.h>


int main(){
    FILE *fp;
    char name[30] , post[30];
    int id;
    fp = fopen("emp.txt" , "w");
    printf("Name, post and id : \n ");
    scanf("%s" , name);
    scanf("%s" , post);
    scanf("%d" , &id);
    fprintf(fp, "%s \t %s \t %d \t" , name, post,id);
    fclose(fp);
    return 0;
}