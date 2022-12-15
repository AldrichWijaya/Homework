#include <stdio.h>
#include <stdlib.h>

void max(int *num, int size, int maximum);

int main()
{
    int a[5] = { 195,234,154,745,256 };
    int size = sizeof(a)/sizeof(a[0]);
    max(a, size-1, a[0]);

    system ("pause");
    return 0;
}

void max(int *num, int size, int maximum) {
    if (size < 0) {
        printf("The maximum element within array is: %d", maximum);
    }
    else {
        if (*num > maximum)
            maximum = *num;

        max(num+1, size-1, maximum);
    }
}
