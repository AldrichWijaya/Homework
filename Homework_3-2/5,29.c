#include <stdio.h>
#include <stdlib.h>

long long int lcm(int num1, int num2);

int main()
{
    int num1, num2;
    printf("Enter two positive integer to find their Least Common Multiple: ");
    scanf("%d %d", &num1, &num2);

    printf("The Least Common Multiple of %d and %d is %lld\n\n", num1, num2, lcm(num1, num2));

    system("pause");
    return 0;
}

long long int lcm (int x, int y)
{
    long long int max = (x > y) ? x : y;
    while (1)
    {
        if ((max % x == 0) && (max % y == 0))
        {
            return max;
        }
        ++max;
    }
}
