#include <stdio.h>
#include <stdlib.h>

void inv (int*);

int main()
{
    int a[3] = {1,2,3};
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("%d   ", a[i]);
    }
    printf("\n");

    inv(a);

    for (i = 0; i < 3; i++)
    {
        printf("%d   ", a[i]);
    }
    printf("\n");

    system ("pause");
    return 0;
}

void inv(int *b)
{
    int temp[3], i;
    for (i = 0; i < 3; i++)
        temp[2-i] = b[i];

    for (i = 0; i < 3; i++)
        b[i] = temp[i];
}
