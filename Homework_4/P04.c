#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10], i;

    for (i = 0; i < 10; i++)
    {
        n[i] = 0;
    }

    printf("%s%10s\n", "Element", "Value");

    for (i = 0; i < 10; i++)
    {
        printf("%7d%10d\n", i, n[i]);
    }

    system ("pause");
    return 0;
}
