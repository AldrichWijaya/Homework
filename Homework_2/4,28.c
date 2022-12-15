#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code, week, hour, item;
    double rate, salary, gross;

    start:
    printf("Enter paycode\nManager: 1\nHourly worker: 2\nCommission worker: 3\nPiece worker: 4\n");
    scanf("%d", &code);
    printf("\n");

    switch(code)
    {
        case 1:
        printf("Enter amount of weeks: ");
            scanf("%d", &week);
        salary = 800 * week;
        if (week < 1)
            printf("I apologize, number of weeks do not meet the requirement for a salary");
        else
            printf("Salary is: %.2lf$", salary);
        break;

        case 2:
        printf("Enter # of hours worked: ");
            scanf("%d", &hour);
        printf("Enter hourly rate of worker: ");
            scanf("%lf", &rate);

            if (hour>40)
                salary = rate*hour+(hour-40)*5;
            else
                salary = rate*hour;

            printf("Salary is: %.2lf$", salary);
        break;

        case 3:
        printf("Enter gross weekly sale: ");
            scanf("%lf", &gross);

        salary = 250 + gross*(0.057);
            printf("Salary is: %.2lf$", salary);
        break;

        case 4:
        printf("Input amount of items: ");
            scanf("%d", &item);
        salary = item * 200;
            printf("Salary is: %.2lf$", salary);
        break;

        default:
            printf("ERROR, inputted integer not within paycode\nPlease try again\n\n");
            goto start;

    }
}
