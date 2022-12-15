#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int n[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        n[i] = 2+2*i;
    }

    printf("%s%10s\n", "Element", "Value");

    for (i = 0; i < SIZE; i++)
    {
        printf("%7d%10d\n", i, n[i]);
    }

    system ("pause");
    return 0;
}
