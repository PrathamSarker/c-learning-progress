#include <stdio.h>
#include <string.h>         //string header. preprocessor directive

int main() {
    
    int age = 0;
    float gpa = 0.0f ;      // f is put to indicate that it's not an integer
    char letter = '\0';        // '\0' is a null terminator character
    char words[] = "";

    printf("Enter your age: \n");
    scanf("%d", &age);      // & sign is used to refer to the address of the mentioned variable

    printf("Enter your gpa:\n");
    scanf("%f", &gpa);

    printf("Enter a letter: \n");
    scanf(" %c", &letter);

    printf("Say Something:\n");
    scanf(" %s", &words);

/*
    scanf cannot read any whitespaces. it will stop after encountering a whitespace.
*/

    char name[30] = "";

    getchar();      //for clearing input buffer               
    printf("Enter full name: ");
    //fgets( name, 30, stdin);             // fgets(variable_name, length, standard_input)
    fgets(name, sizeof(name), stdin);           // using sizeof(variable)
    name[strlen(name) -1] = '\0';

}