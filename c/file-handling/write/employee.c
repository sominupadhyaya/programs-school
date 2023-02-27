#include <stdio.h>
#include "../../header/printOwnership.h"


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

    print_ownership();
    return 0;
}