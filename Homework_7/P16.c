#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main()
{
    FILE *filePointer;
    char string[MAX], character;
    int i = 0;

    filePointer = fopen("../Homework_7/P16.txt","a");
    printf("Input any strings to be added. Press ENTER to end:\n");

    while ((character = getche()) != ENTER && i < MAX)
        string[i++] = character;
    putc('\n', filePointer);

    fwrite(string, sizeof(char), i, filePointer);
    fclose(filePointer);

    printf("P16.txt Modified!\n");

    system ("pause");
    return 0;
}
