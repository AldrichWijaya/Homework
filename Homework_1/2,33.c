#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mile, gas, mpg, park, toll, cost;

    printf("Input your total miles driven per day\n");
    scanf("%f", &mile);

    printf("Input the cost  per gallon of gasoline\n");
    scanf("%f", &gas);

    printf("Input your average miles per gallon\n");
    scanf("%f", &mpg);

    printf("Input your parking fees per day\n");
    scanf("%f", &park);

    printf("Input your tolls per day\n");
    scanf("%f", &toll);

    cost = (gas * mpg)/mile + park + toll;

    printf("Your total cost is %f", cost);
}
