#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void printer(const int a[][3]);

int main()
{
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[2][3] = {1,2,3,4,5};
    int C[2][3] = {{1,2},{3}};

    printf("Values is A by row is:\n");
    printer(A);

    printf("Values is B by row is:\n");
    printer(B);

    printf("Values is C by row is:\n");
    printer(C);

    system ("pause");
    return 0;
}

void printer(const int a[][3])
{
    int i, j;

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
