/************************** doubleOK.c **************************************************
        Source File number 4. Function check if number has a proper format
****************************************************************************************/

/* Function intOK. Arguments; string to Check. Function return 1(True) provided that format is right, 0(false) otherwise */

#include <string.h>
#include <ctype.h>

int intOK(char myString[])
{
    int stringSize = strlen(myString); //string size
    int i; //loop counter

    for( i = 0 ; i < stringSize; i++){
        if (isdigit(myString[i])){
            continue; // It's a digit
        } else {
            return 0; // not digit, format incorrect
        }
    }

    return 1; // format correct
}

