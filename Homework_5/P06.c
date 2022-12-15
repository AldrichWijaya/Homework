#include <stdio.h>
#include <stdlib.h>

int cubeValue(int n);

int main()
{
    int num = 5;
    printf("The original value of num is: %d\n", num);

    num = cubeValue(num);
    printf("The modified value of num is: %d\n", num);

    system ("pause");
    return 0;
}

int cubeValue(int n) {
    return n * n * n;
}
