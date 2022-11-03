#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Insert an integer:\n");
    scanf("%d", &num1);

    printf("Insert another integer:\n");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
        printf("%d is the multiple of %d\n", num1, num2);
    else printf("%d is not the multiple of %d\n", num1, num2);
}
