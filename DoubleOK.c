/************************** doubleOK.c **************************************************
        Source File number 3. Function check if number has a proper format
****************************************************************************************/

/* Function DoubleOK. Arguments; string to Check. Function return 1(True) provided that format is right, 0(false) otherwise */

#include <string.h>
#include <ctype.h>

int doubleOK(char myString[])
{
    int stringSize = strlen(myString); //string size
    int i, counter; //loop counter and decimal point counter

    counter = 0;

    for( i = 0 ; i < stringSize; i++){
        if (isdigit(myString[i])){
            continue; // It's a digit
        } else if (myString[i] == '.') {
            counter++; // It's a decimal point
            continue;
        } else {
            return 0; // not digit and not decimal point, format incorrect
        }
    }

    if (counter > 1){
        return 0; // If there is more than one decimal point, format incorrect
    }

    return 1; // format correct
}
