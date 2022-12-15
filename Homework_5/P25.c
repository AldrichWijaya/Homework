#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int leDeck[][13]);
void deal(const int leDeck[][13], const char *leFace[], const char *leSuit[]);

int main()
{
    const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[13] = {"Ace", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Jack", "Queen", "King"};

    int deck[4][13] = {0};

    srand(time(0));

    shuffle(deck);
    deal(deck, face, suit);

    system ("pause");
    return 0;
}

void shuffle(int leDeck[][13]) {
    int row, column, card;

    for(card = 1; card <= 52; card++) {
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while (leDeck[row][column] != 0);

        leDeck[row][column] = card;
    }
}

void deal(const int leDeck[][13], const char *leFace[], const char *leSuit[]) {
    int row, column, card;

    for (card = 1; card <= 52; card++) {
        for(row = 0; row <= 3; row++) {
            for (column = 0; column <= 12; column++) {
                if (leDeck[row][column] == card) {
                    printf("%5s of %-8s%c", leFace[column], leSuit[row], card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}
