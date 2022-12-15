#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight, height, bmi;
    printf("Input your weight(in kilograms)\n");
    scanf("%f", &weight);
    
    printf("Input your height(in meter)\n");
    scanf("%f", &height);
    
    bmi = weight/(height*height);
    
    if (bmi < 18.5)
    printf("You are underweight\n");
    
    else if (18.5 <= bmi <= 29.9)
    printf("Your are normal\n");
    
    else if (25 <= bmi <= 29.9)
    printf("You are overweight\n");
    
    else if (bmi > 30)
    printf("You are obese\n");
    
    else
    printf("Error\n");
}
