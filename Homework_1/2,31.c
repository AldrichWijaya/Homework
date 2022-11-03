#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b;
    printf("number square cube\n");
    for (i = 0; i <= 10; i++)
    {
        a = i * i;
        b = i * i * i;
        printf("%6d %7d %5d\n", i, a, b);
    }
}
