#include <stdio.h>
#include <stdlib.h>

void cubeReference(int &n);

int main()
{
    int num = 5;
    printf("The original value of num is: %d\n", num);

    cubeReference(num);
    printf("The modified value of num is: %d\n", num);

    system ("pause");
    return 0;
}

void cubeReference(int &n) {
    n = n * n * n;
}
