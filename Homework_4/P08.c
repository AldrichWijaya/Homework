#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int n[SIZE] = {10,1,9,2,8,3,7,4,6,5};
    int i, j;

    printf("%s%10s%15s\n", "Element", "Value", "Histogram");

    for (i = 0; i < SIZE; i++)
    {
        printf("%7d%10d    ", i, n[i]);
        for (j = 1; j <= n[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    system ("pause");
    return 0;
}
