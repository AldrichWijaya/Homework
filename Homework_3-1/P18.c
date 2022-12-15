#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char string1[60]="Hello!";
    char string2[60];

    int length;

    strcpy(string2, string1);
    printf("string2 now contains = %s\n", string2);

    length = strlen(string2);
    printf("The amount of letters within string2 is = %d\n", length);

    system("pause");
    return 0;
}
