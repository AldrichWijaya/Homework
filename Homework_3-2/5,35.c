#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main()
{
    unsigned int n;
    start:
    printf("Enter n to find Fibonacci Series: ");
    scanf("%d", &n);
    /*Limit of n is 50, any more, and data overflow will occur*/
    printf("The Fibonacci Series of %u is: %llu\n\n", n, fibonacci(n));
    goto start;
}

unsigned long long int fibonacci (unsigned int n)
{
    unsigned int i, t1 = 0, t2 = 1, tPlus = t1 + t2;

    if (n == 1)
        tPlus = t1;
    else if (n == 2)
        tPlus = t2;
    for (i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = tPlus;
        tPlus = t1 + t2;
    }
    return tPlus;
}
