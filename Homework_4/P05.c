#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10] = {15,14,25,74,26,82,58,24,85,24};
    int i;

    printf("%s%10s\n", "Element", "Value");

    for (i = 0; i < 10; i++)
    {
        printf("%7d%10d\n", i, n[i]);
    }

    system ("pause");
    return 0;
}
