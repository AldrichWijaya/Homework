#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float CI, rate;

    for (rate = 10; rate <= 12; rate += 0.5)
    {
        CI = 5000* (pow((1 + rate/100), 15));
        printf("Compound interest with %.1f percent rate is : %.2f\n", rate, CI);
    }
}
