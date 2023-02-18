/* This is a custom header to print name and stuff
*** to be using this make sure to have the following line 
*** of code in your vscode's settings.json file
    "files.associations": {
        "stdio.h": "c",
        "print_ownership.h": "c"
    }
*** or just add the include path for the compiler to search ${workspace}/c
*/

//include guard
#ifndef owner 
#define owner 0

void print_ownership(){
    //Line Separator
    printf("\n**************************\n");

    //Your name here VVV
    printf("Surab Parajuli\n");

    //Roll number
    printf("Grade: XII - \"I2\"\t Roll:43\n\n");

    getchar();
}

#endif