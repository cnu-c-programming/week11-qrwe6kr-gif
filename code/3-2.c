#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    return x - y;
}

int cmp_desc(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    return y - x;
}

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = 6;

    qsort(arr, size, sizeof(int), cmp_asc);
    print_arr(arr, size);

    qsort(arr, size, sizeof(int), cmp_desc);
    print_arr(arr, size);

    return 0;
}
