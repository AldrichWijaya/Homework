#include <stdio.h>
#include <stdlib.h>

int add1(int);

int main()
{
    int x = 100;
    int y = add1(x);
    printf("x=%d\n", x);
    system ("pause");
}

int add1(int xref)
{
    xref++;
    printf("xref=%d\n", xref);
    return xref;
}
