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
            if (i + j <= 3)
                printf("%c", sign2);
            else if (i + j >= 13)
                printf("%c", sign2);
            else if (i - 2 >= j + 3)
                printf("%c", sign2);
            else if (i + 2 <= j - 3)
                printf("%c", sign2);
            else
                printf("%c", sign);
        }
        printf("\n");
    }
}
