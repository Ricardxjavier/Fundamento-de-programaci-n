#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int size, int ascending) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((ascending && array[i] > array[j]) || (!ascending && array[i] < array[j])) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int* merge(int *array1, int size1, int *array2, int size2) {
    int *merged = malloc((size1 + size2) * sizeof(int));
    for (int i = 0; i < size1; i++) {
        merged[i] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[i + size1] = array2[i];
    }
    sort(merged, size1 + size2, 0);
    return merged;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);

    sort(array1, size1, 1);
    sort(array2, size2, 0);

    int *merged = merge(array1, size1, array2, size2);

    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    free(merged);

    return 0;
}
