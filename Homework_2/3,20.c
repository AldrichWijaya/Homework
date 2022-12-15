#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float hour, rate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f", &hour);

    while (hour>0)
    {
        printf("Enter hourly rate of worker: ");
        scanf("%f", &rate);

        if (hour>40)
            salary = rate*hour+(hour-40)*5;
        else
            salary = rate*hour;

        printf("Salary is: %f", salary);
        return 0;
    }
    return 0;
}
