#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char sign = '*';
    char sign2 = ' ';
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i >= j)
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i + j <= 9)
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i <= j)
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i + j >= 9)
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        printf("\n");
    }
    printf("\n");
}
