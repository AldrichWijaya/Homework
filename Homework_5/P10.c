#include <stdio.h>
#include <stdlib.h>

void cubeAddress(int *n);

int main()
{
    int num = 5;
    printf("The original value of num is: %d\n", num);

    cubeAddress(&num);
    printf("The modified value of num is: %d\n", num);

    system ("pause");
    return 0;
}

void cubeAddress(int *n) {
    *n = *n * *n * *n;
}
