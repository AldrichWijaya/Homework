#include <stdio.h>
#include <stdlib.h>

double power(double, int);

int main ()
{
    int k;
    double num;

    printf("Calculate 3.5 the power of k\nk = ");
    scanf("%d", &k);

    num = power(3.5, k);
    printf("3.5 the power of %d is :%f", k, num);
    system ("pause");
    return 0;
}

double power(double x, int n)
{
    int i;
    double powerxn = 1;

    for (i = 1; i <= n; i++)
        powerxn = powerxn * x;
    return powerxn;
}
