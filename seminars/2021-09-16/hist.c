#include <stdio.h>

int main() {
    // unsigned size = 10;
    // int arr[size];

    // for (int i = 0; i < size; ++i)
    //     arr[i] = i;

    // for (int i = 0; i < size; ++i)
    //     printf("%d\n", arr[i]);


    // int arr2[] = {1, 2, 3, 4};
    // for (int i = 0; i < 4; ++i)
    //     printf("%d%c", arr2[i], i < 3 ? ' ' : '\n');

    int scores[] = {5, 7, 6, 8, 9, 9, 6, 8, 6, 8, 7, 7, 7};
    int hist[11];
    
    for (int i = 0; i < 11; ++i)
        hist[i] = 0;

    for (int i = 0; i < 13; ++i)
        ++hist[scores[i]];

    for (int i = 0; i < 11; ++i) {
        printf("%2d: %2d  ", i, hist[i]);
        for (int j = 0; j < hist[i]; ++j) putchar('*');
        putchar('\n');
    }

    return 0;
}
