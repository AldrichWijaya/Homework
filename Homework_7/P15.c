#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *Pointer1, *Pointer2;
    char character;

    Pointer1 = fopen("../Homework_7/P15_In.txt","r");
    Pointer2 = fopen("../Homework_7/P15_Out.txt","w");
    if ((Pointer1 != NULL) && (Pointer2 != NULL)) {
        while ((character = getc(Pointer1)) != EOF)
            putc(character, Pointer2);

        fclose(Pointer1);
        fclose(Pointer2);

        printf("Copied P15_In.txt to P15_Out.txt successfully!\n");
    }

    else
        printf("File not found!!\n");

    system ("pause");
    return 0;
}
