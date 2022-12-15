#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float princ, rate, day, interest;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &princ);

    while (princ>0)
    {
        printf("Enter interest rate: ");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%f", &day);

        interest = princ * rate * day / 365;
        printf("The interest charge is: %f", interest);
        return 0;
    }
    return 0;
}
