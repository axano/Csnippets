#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char ASK_VERIFICATION[] = "Are you sure?(Yy/Nn)";
const char ASK_PRESSKEY[] = "Press any key to continue...";

//Prompts the user with a Yy/Nn question
//if Y or y is answered returns true
//in EVERY OTHER case returns false.
bool verify() {
    puts(ASK_VERIFICATION);
    char answer = getch();
    fflush(stdin);
    return (answer == 'y' || answer == 'Y');
}

//Pauses the program flow by asking the user to press any key.
//getchar() is used here.
void pause(){
    puts(ASK_PRESSKEY);
    getch();
    fflush(stdin);
    return;
}
