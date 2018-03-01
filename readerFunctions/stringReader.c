#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prompts a question
//reads a string
//assigns the read value to the string that is passed by reference
//flushes stdin to forecome bugs due to remaining characters in the buffer
//if a user gives in more characters than the limit
//warns the user and reareads , if the input was bigger than the limit
//by checking if the last char is a newline character
//strips the newline character by calling strip_newline() 
//to forecome bugs while comparing strings.
void readString(char *stringToReadconst,const char *message, int size) {
   
    puts(message);
    fgets(stringToReadconst, size, stdin);
    fflush(stdin);
    while ((!strchr(stringToReadconst, '\n'))) {
        puts("Error");
        fgets(stringToReadconst, size, stdin);
        fflush(stdin);
    }
    strip_newline(stringToReadconst);
    return ;
}


//Strips the newline character from a string using strtok()
//https://www.tutorialspoint.com/c_standard_library/c_function_strtok.htm
//parameter is passed by reference.
void strip_newline(char *arr) {
    strtok(arr, "\n");
    return ;
}
