#include <stdio.h>
#include <stdlib.h>

void Static(void);
void Auto(void);

int main()
{
    printf("First call to each function:\n");
    Static();
    Auto();

    printf("\n\n\nSecond call to each function:\n");
    Static();
    Auto();

    printf("\n");
    system ("pause");
    return 0;
}

void Static(void)
{
    static int array1[3];
    int i;

    printf("\nStatic former value:\n");

    for (i = 0; i <= 2; i++)
        printf("array1[%d] = %d  ", i, array1[i]);

    printf("\nStatic latter value:\n");

    for (i = 0; i <= 2; i++)
        printf("array1[%d] = %d  ", i, array1[i]+=5);
}

void Auto(void)
{
    int array2[3];
    int i;

    printf("\n\nAuto former value:\n");

    for (i = 0; i <= 2; i++)
        printf("array2[%d] = %d  ", i, array2[i]);

    printf("\nAuto latter value:\n");

    for (i = 0; i <= 2; i++)
        printf("array2[%d] = %d  ", i, array2[i]+=5);
}
