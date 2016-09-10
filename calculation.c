/************************** calculation.c ******************************
        source file number 2. interest amount calculation
***************************************************************************/

/* function cal. Arguments; money, InterestRate and days. Output, interest amount*/

double cal(double money, double interestRate, int days)
{
    double output;
    output = money * interestRate * days / (360 * 100);
    return output;
}
