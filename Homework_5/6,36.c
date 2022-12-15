#include <stdio.h>
#include <stdlib.h>

void reverseEm(char *word);

int main()
{
    char sheesh[] = "";
    printf("Input string: "); scanf("%s", &sheesh);
    reverseEm(sheesh);
    printf("\n");

    system ("pause");
    return 0;
}

void reverseEm(char *word) {
    if (*word != '\0') {
        reverseEm(word + 1);
        printf("%c", *word);
    }
}
