#include <stdio.h>
#include <stdlib.h>

struct card {
    char *face;
    char *suit;
};

int main()
{
    struct card Card;
    struct card *Pointer;

    Card.face = "Ace";
    Card.suit = "Spades";

    Pointer = &Card;

    printf("%s of %s\n%s of %s\n%s of %s\n",
           Card.face, Card.suit,
           Pointer->face, Pointer->suit,
           (*Pointer).face, (*Pointer).suit);

    system ("pause");
    return 0;
}
