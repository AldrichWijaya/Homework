#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, r, dubx, duby, dubr;

    for (r = 0; r < 500; r++)
    {
        for (x = 1; x < 500; x++)
        {
            for (y = 1; y < 500; y++)
            {
                dubx = x * x;
                duby = y * y;
                dubr = r * r;
                if (dubr == dubx + duby)
                    printf("%d, %d, %d\n", x, y, r);
            }
        }
    }
}
