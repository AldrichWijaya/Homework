#include <stdio.h>
#include <stdlib.h>

long long int reexp(int base, int exp);

int main()
{
    int base, exp;
    printf("Recursive exponential\nEnter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    printf("%d power of %d is: %lld\n\n", base, exp, reexp(base, exp));

    system("pause");
    return 0;
}

long long int reexp (int x, int y)
{
    int i, res = x;
    for (i = y; i > 1; i--)
    {
        res = res * x;
    }
    return res;
}
