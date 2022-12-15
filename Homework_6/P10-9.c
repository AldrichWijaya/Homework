#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct card {
    const char *Face;
    const char *Suit;
} Card;

void FillDeck(Card * const Deck, const char *face[], const char *suit[]);
void Shuffle(Card * const Deck );
void Deal(const Card * const Deck);

int main()
{
    Card deck[52];
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[] = {"Ace", "One", "Two", "Three", "Four",
                            "Five", "Six", "Seven", "Eight", "Nine",
                            "Jack", "Queen", "King"};

    srand(time(NULL));

    FillDeck(deck, face, suit);
    Shuffle(deck);
    Deal(deck);

    system ("pause");
    return 0;
}

void FillDeck(Card * const Deck, const char *face[], const char *suit[]) {
    int i;
    for (i = 0; i <= 51; i++) {
        Deck[i].Face = face[i % 13];
        Deck[i].Suit = suit[i / 13];
    }
}

void Shuffle(Card * const Deck ) {
    int i, j;
    Card temp;

    for(i = 0; i <= 51; i++) {
        j = rand() % 52;
        temp = Deck[i];
        Deck[i] = Deck[j];
        Deck[j] = temp;
    }
}

void Deal(const Card * const Deck) {
    int i;

    for (i = 0; i <= 51; i++) {
        printf("%5s of %-8s%s", Deck[i].Face, Deck [i].Suit, (i + 1) % 4 ? "  " : "\n");
    }
}
