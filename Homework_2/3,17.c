#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int account;
    float inbal, totcharge, totcredit, creditlim, bal;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    while (account>0)
    {
        printf("Enter beginning balance: ");
        scanf("%f", &inbal);
        printf("Enter total charges: ");
        scanf("%f", &totcharge);
        printf("Enter total credits : ");
        scanf("%f", &totcredit);
        printf("Enter credit limit: ");
        scanf("%f", &creditlim);

        bal = inbal + totcharge - totcredit;

        if (bal > creditlim)
        {
            printf("\nAccount:      %d", account);
            printf("\nCredit limit: %f", bal);
            printf("\nBalance:      %f", creditlim);
            printf("\nCredit limit exceeded");
            return 0;
        }
        else
            return 0;
    }
    return 0;
}
