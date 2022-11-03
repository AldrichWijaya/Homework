#include <stdio.h>
#include <stdlib.h>

char caseChange(char Char);

int main()
{
    char Char;
    printf("Enter a character: ");
    scanf("%c", &Char);

    printf("After a case change, we get: %c\n", caseChange(Char));

    system("pause");
    return 0;
}

char caseChange (char c)
{
    char bruh;
    int dec;

    dec = c;

    if ((dec >= 65) && (dec <= 90))
        bruh = dec + 32;


    else if ((dec >= 97) && (dec <= 122))
        bruh = dec - 32;

    else bruh = '?';

    return bruh;
}
