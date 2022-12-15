#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float sales, salary;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while (sales>0)
    {
        salary = 200 + 0,09*sales;
        printf("Salary is: %f", salary);
        return 0;        
    }
    return 0
}