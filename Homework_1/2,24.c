#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num;
    
    printf("Enter an integer:\n");
    scanf("%d", num);
    
    if (num % 2 == 0)
        printf("%d is an even number");
    else printf("%d is an odd number");
}
