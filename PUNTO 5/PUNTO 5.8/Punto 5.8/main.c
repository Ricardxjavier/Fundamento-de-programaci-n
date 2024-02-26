#include <stdio.h>
#define SIZE 10

void merge(int a[], int b[], int c[], int n, int m) {
    int i = 0, j = 0, k = 0;

    while (i<n && j <m) {
        if (a[i] >= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];
}

void sort_desc(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[SIZE] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int c[2*SIZE];

    sort_desc(a, SIZE);
    sort_desc(b, SIZE);
    merge(a, b, c, SIZE, SIZE);

    for (int i = 0; i < 2*SIZE; i++)
        printf("%d ", c[i]);

    return 0;
}
