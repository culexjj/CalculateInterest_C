/************************** main.c ******************************
        Source file number 1. main function
*****************************************************************/

#include <stdio.h>
#include <stdlib.h>


/*  Function's Declaration */

double cal(double capital, double interestRate, int days);
int doubleOK( char string[]);
int intOK(char string[]);

/* Function MAIN */

int main()
{
    /* Variable declaration */

    double money, FinalAmount, interest, interestRate;
    int days, control;
    char go_on;
    char capitalS[21]; //max size number to read = 20
    char interestRateS[6]; //tmax size number to read = 5
    char daysS[6];//maz size number to read = 5

    do {
        /* Variable definition */
        money = 0;
        FinalAmount = 0;
        interest = 0;
        interestRate = 0;
        days = 0;
        control = 0;
        go_on = 'n';

        system("cls"); // clear screen


        /* Reading values from console - input */

        do
        {
            fflush(stdin);//cleaning buffer
            printf("Capital investment: ");
            scanf("%s", capitalS);
            fflush(stdin);//cleaning buffer

            control = doubleOK(capitalS);

            if (control == 1){
                money = strtod(capitalS, NULL);
            } else {
                printf("Input incorrect\n\n");
             }
        }
        while (control == 0);

        do
        {
            fflush(stdin);//cleaning buffer
            printf("\nInterest rate %%: ");
            scanf("%s", interestRateS);
            fflush(stdin);//cleaning buffer

            control = doubleOK(interestRateS);

            if (control == 1){
               interestRate = strtod(interestRateS, NULL);
            } else {
                printf("Input incorrect\n\n");
             }
        }
        while (control == 0);

        do
        {
            fflush(stdin);//cleaning buffer
            printf("\nDays: ");
            scanf("%s", daysS);
            fflush(stdin);//cleaning buffer

            control = intOK(daysS);

            if (control == 1){
               days = strtod(daysS, NULL);
            } else {
                printf("Input incorrect\n\n");
             }
        }
        while (control == 0);


        /* calculation operation */

        interest = cal(money, interestRate, days);
        FinalAmount = money + interest;

        /* printing output */

        printf("\n\n");
        printf("Interest amount....... %10.2f Euros", interest);
        printf("\nTotal amount.......... %10.2f Euros", FinalAmount);
        printf("\n\n");


        printf("Try again y/n (yes or no)");
        go_on = getchar();
        fflush(stdin);//cleaning buffer
        system("cls"); // clear screen

        while (go_on != 'y' && go_on != 'n')
        {
            printf("\nInput incorrect");
            printf(" Try again y/n (yes or no)");
            go_on = getchar();
            fflush(stdin);//cleaning buffer
        }
    }
    while (go_on == 'y');

    system("pause");
    return 0;
}
