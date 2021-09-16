#include <stdio.h>

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

    return 0;
}
