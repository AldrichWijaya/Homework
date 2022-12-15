#include <stdio.h>
#include <stdlib.h>
#define Size 10

void bubbleSort(int *const array, const int size);

int main()
{
    int a[Size] = {2,6,4,8,10,12,89,68,45,37};
    int i;

    printf("Data items in original order\n");
    for (i = 0; i < Size; i++) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, Size);

    printf("\nData items in ascending order\n");
    for (i = 0; i < Size; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");

    system ("pause");
    return 0;
}

void bubbleSort(int * const array, const int size) {
    void swap(int * element1, int * element2);
    int i, j;

    for(i = 0; i < size-1; i++) {
        for(j = 0; j < size-1; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void swap(int *element1, int *element2) {
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}
