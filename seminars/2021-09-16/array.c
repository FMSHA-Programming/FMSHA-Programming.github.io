#include <stdio.h>

void array_square(int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        arr[i] *= arr[i];
    }
}

void print_square(const int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%d%c", arr[i], i < 3 ? ' ' : '\n');
    }
}

int main() {
    unsigned size = 10;
    int arr[size];

    for (int i = 0; i < size; ++i)
        arr[i] = i;

    for (int i = 0; i < size; ++i)
        printf("%d\n", arr[i]);


    int arr2[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; ++i)
        printf("%d%c", arr2[i], i < 3 ? ' ' : '\n');

    array_square(arr2, 4);
    for (int i = 0; i < 4; ++i)
        printf("%d%c", arr2[i], i < 3 ? ' ' : '\n');


    int matrix[3][2] = {
        {1, 0},
        {0, 1},
        {1, 0}
    };

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%3d", matrix[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
