#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int n[SIZE] = {15,14,25,74,26,82,58,24,85,24};
    int i;
    int total = 0;

    for (i = 0; i < SIZE; i++)
    {
        total += i[n];
    }

    printf("Total of array element value is: %d\n", total);

    system ("pause");
    return 0;
}
