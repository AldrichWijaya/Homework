#include <stdio.h>
#include <stdlib.h>

void tower(int num, char a, char b, char c);

int main()
{
    int num = 64;
    printf("The sequence to solve the Towers of Hanoi:\n");
    tower(num, 'A', 'B', 'C');

    system ("pause");
    return 0;
}

void tower(int num, char from, char to, char aux)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from %c to %c", from, to);
        return;
    }

    tower(num - 1, from, aux, to);
    printf("\n Move disk %d from %c to %c", num, from, to);
    tower(num - 1, aux, to, from);
}
