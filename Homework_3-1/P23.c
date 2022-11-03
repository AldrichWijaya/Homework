#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};
int roll (void);

int main ()
{
    int sum;
    int point;

    enum Status stat;

    srand(time(NULL));
    sum = roll();

    switch (sum)
    {
        case 7:
        case 11:
            stat = WON;
            break;

        case 2:
        case 3:
        case 12:
            stat = LOST;
            break;

        default:
            stat = CONTINUE;
            point=sum;
            printf("Your point is %d\n", point);
            break;
    }

    while (stat == CONTINUE)
    {
        sum = roll();

        if (sum == point)
            stat = WON;
        else
        {
            if (sum == 7)
                stat = LOST;
        }
    }

    if (stat == WON)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }

    system("pause");
    return 0;
}

int roll (void)
{
    int d1, d2, dsum;

    d1 = 1+(rand()%6);
    d2 = 1+(rand()%6);
    dsum = d1 + d2;

    printf("You rolled %d + %d = %d\n", d1, d2, dsum);
    return dsum;
}
