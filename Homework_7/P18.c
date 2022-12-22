#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inputPointer, *outputPointer;
    char string[100];
    int Ummm;

    inputPointer = fopen("../Homework_7/P18_In.txt","r");
    outputPointer = fopen("../Homework_7/P18_Out.txt","w");

    while (!feof(inputPointer)) {\
        Ummm = fscanf(inputPointer, "%s", string);
        if (Ummm > 0)
            fprintf(outputPointer, "%s\n", string);
    }

    fclose(inputPointer);
    fclose(outputPointer);

    printf("File modified!\n");

    system ("pause");
    return 0;
}
