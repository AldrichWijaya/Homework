#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int left, int right, int key);

int main()
{
    int a[8] = { 6,16,34,56,57,79,86,98 };
    int key, result, size;

    printf("Input key: "); scanf("%d", &key);
    size = sizeof(a)/sizeof(a[0]);

    result = binarySearch(a, 0, size-1, key);

    if (result == -1)
        printf("Element not found within array\n");
    else
        printf("Element found at %d\n", result);

    system ("pause");
    return 0;
}

int binarySearch(int array[], int left, int right, int key) {
    int mid;

    if (right >= left) {
        mid = left + (right - left)/2;

        if (array[mid] == key)
            return mid;
        if (array[mid] > key)
            return binarySearch(array, left, mid-1, key);
        else
            return binarySearch(array, mid+1, right, key);
    }
    else
        return -1;
}
