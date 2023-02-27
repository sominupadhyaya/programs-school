/* This is a custom header to print name and stuff
*** to be using this make sure to have the following line 
*** of code in your vscode's settings.json file
    "files.associations": {
        "stdio.h": "c",
        "printOwnership.h": "c"
    }
*** or just add the include path for the compiler to search ${workspace}/c/header/
*/

//include guard
#ifndef owner 
#define owner 0


void print_ownership(){
    //Line Separator
    printf("\n**************************\n");

    //Your name here VVV
    printf("Somin Upadhyaya\n");

    //Roll number
    printf("Grade: XII - \"I2\"\t Roll:39\n\n");

    getchar();
}

#endif