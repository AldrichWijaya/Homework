#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1, num2, num3;
    
    printf("Insert the first integer\n");
    scanf("%d", num1);
    
    printf("Insert the second integer\n");
    scanf("%d", num2);
    
    printf("Insert the third integer\n");
    scanf("%d", num3);
    
    if (num1 > num2 & num1 > num3)
    printf("%d is the largest integer", num1);
    
    if (num2 > num1 & num2 > num3)
    printf("%d is the largest integer", num2);
    
    if (num3 > num1 & num3 > num2)
    printf("%d is the largest integer", num3);
    
    if (num1 < num2 & num1 < num3)
    printf("%d is the smallest integer", num1);
    
    if (num2 < num1 & num2 < num3)
    printf("%d is the smallest integer", num2);
    
    if (num3 < num1 & num3 < num2)
    printf("%d is the smallest integer", num3);
}
