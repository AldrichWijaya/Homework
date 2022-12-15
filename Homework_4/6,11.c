#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int i, j, k, temp;
    int a[SIZE] = {26,63,7,81,5};

    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = 0, k = 0; j < SIZE - 1 - i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

            else
            {
                k++;
                if (k == SIZE - 1 - i) goto Bruh;
            }
        }
        printf("Loop %d: ", i);
        for (j = 0; j < 5; j++)
            printf("%4d", a[j]);
        printf("\n");
    }
    Bruh:
    system ("pause");
    return 0;
}
