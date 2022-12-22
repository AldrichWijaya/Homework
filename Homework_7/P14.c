#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    char character;
    int counter = 0;

    filePointer = fopen("../Homework_7/P14.txt","r");
    if (filePointer != NULL) {
        while ((character = getc(filePointer)) != EOF) {
            printf("%c", character);
            counter++;
        }
        fclose(filePointer);
        printf("\n\nNumber of letters within file: %d\n\n", counter);
    }

    else
        printf("File not found!!\n");

    system ("pause");
    return 0;
}
