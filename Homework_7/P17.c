#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main()
{
    FILE *filePointer;
    char string[MAX], character;
    int bytes;

    filePointer = fopen("../Homework_7/P17.txt","r");

    while (!feof(filePointer)) {\
        bytes = fread(string, sizeof(char), MAX-1, filePointer);
        string[bytes]='\0';
        printf("%s", string);
    }
    printf("\n");

    fclose(filePointer);

    system ("pause");
    return 0;
}
