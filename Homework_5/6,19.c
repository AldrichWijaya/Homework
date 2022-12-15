#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diceRoll(int roll1, int roll2, int counter[]);
void frequencyPrinter(int counter[]);

int main()
{
    int dice1, dice2, i;
    int rolled[13] = {0};

    srand(time(NULL));

    diceRoll(dice1, dice2, &rolled);
    frequencyPrinter(rolled);

    system ("pause");
    return 0;
}

void diceRoll(int roll1, int roll2, int counter[]) {
    int j;
    for (j = 1; j <= 36000; j++) {
        roll1 = 1 + rand()%6;
        roll2 = 1 + rand()%6;
        counter[roll1 + roll2]++;
    }
}

void frequencyPrinter(int counter[]) {
    int i;

    for (i = 2; i < 13; i++) {
        printf("%5d%12d\n", i, counter[i]);
    }
}
