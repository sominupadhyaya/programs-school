#include <stdio.h>
#include <stdlib.h>

typedef union
{
    char* _country;
    int _country_rank;
}United_Nations;


int main(void){
    United_Nations a;

    a._country = "NEPAL";
    printf("%s\n", a._country);

    a._country_rank = 5;
    printf("%d\n", a._country_rank);

    //Following code DOESNOT work since union can only store a single variable at a time
    // printf("%s\n%d", a._country, a._country_rank);

    getchar();
}